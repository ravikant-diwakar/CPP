#include <iostream>

using namespace std;

int main() {

    int limit;

    cout<<"Enter the limit :";
    cin>>limit;

    cout << "Prime numbers up to " << limit << " are: ";

    for (int num=2; num<=limit; num++) {
        bool isPrime = true;

        for(int i=2; i*i <=num; i++){
            if(num % i ==0){
                isPrime=false;
                break;
            }
        }

        if (isPrime){
            cout<<num<<" ";
        }
    }

    cout <<endl;
    return 0;
}
