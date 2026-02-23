#include <iostream>
using namespace std;

int main(){
    // ARRAYS:
    // calculate sum of square of 5 numbers:
    int arr[5];
    int sum = 0;
    for(int i=0; i<5; i++){
        cout<<"Enter numbers:";
        cin >> arr[i];
    }
    for(int i = 0; i<5; i++){
        sum = sum+(arr[i]*arr[i]);
    }
    cout<<"Sum is:"<<sum;
}