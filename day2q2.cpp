#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {

    int speed;
    cin>>speed;

    int distance=800;

    double speed_ms=speed*5/18;

    int time=distance/speed_ms;
    cout<<time<<endl;


    return 0;
}
