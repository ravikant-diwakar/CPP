#include<bits/stdc++.h> 
#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int day=7;
    int arr[day];
    int total=0;
    double average;

    for(int i=0; i<day; i++) {
        cout<<"Day "<<(i+1)<<" duration of exercise:";
        cin>>arr[i];
        total+=arr[i];

    }
    average=(double)total/day;
    average=round(average*100)/100;

    cout<<"Exercise duration"<<endl;
    cout<<"Total time : "<<total<<endl;
    cout<<"Average time in min :"<<average<<endl;

    return 0;
}