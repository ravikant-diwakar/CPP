#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector<int> vec;
    // vector<int> vec = {1,2,3,4,5};
    // vector<int> vec (10,2);

    // vector<int> vec1 = {1,2,3,4,5};

    // vector<int> vec2(vec1);

    vector<int> vec = {1,2,3,4,5};

    // vec.erase(vec.begin());
    // vec.erase(vec.begin()+2);
    // vec.erase(vec.begin()+1,vec.begin()+3);
    // vec.insert(vec.begin()+2, 100);
    // vec.clear();


    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);

    // vec.pop_back();


    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // cout << "Size : " << vec.size() << endl;
    // cout << "Capacity : " << vec.capacity() << endl;

    // cout << "is empty : " << vec.empty() << endl;
  
    // for(int val : vec2) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // for(int val : vec) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // cout << "val at index 2: " << vec[3] << " or " << vec.at(3) << endl;

    // cout << "val at index 2 : " << vec[3] << " or " << vec.at(3) << endl;

    // cout << " front : " << vec.front() << endl;
    // cout << " Back : " << vec.back() << endl;   


    // cout << "vec.begin : " << *(vec.begin()) << endl;
    // cout << "vec.end : " << *(vec.end()) << endl;

    vector<int>::iterator it;
    
    for(it = vec.begin(); it !=vec.end(); it++) {
        cout << *(it) << " ";
    }

    cout<<endl;


    return 0;

}  