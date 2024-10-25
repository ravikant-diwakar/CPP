#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits> // Include this header for INT_MAX

using namespace std;

vector<int> findMinPeakPerformance(const vector<int>& performance, const vector<int>& queries) {
    vector<int> results;
    for (int d : queries) {
        deque<int> dq;
        int minPeak = INT_MAX;
        
        for (int i = 0; i < performance.size(); ++i) {
            while (!dq.empty() && dq.front() <= i - d) {
                dq.pop_front();
            }
            while (!dq.empty() && performance[dq.back()] <= performance[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            if (i >= d - 1) {
                minPeak = min(minPeak, performance[dq.front()]);
            }
        }
        results.push_back(minPeak);
    }
    return results;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> performance(n);
    for (int i = 0; i < n; ++i) {
        cin >> performance[i];
    }
    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }
    
    vector<int> results = findMinPeakPerformance(performance, queries);
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
