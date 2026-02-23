#include <iostream>
using namespace std;
int main(){
    // Sum of Digits:
    int arr[] = {3,7,4,5,8};
    int n = sizeof(arr)/4;
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum += arr[i];
    }
    // Product Of Digits:
    cout<<sum<<endl;
    cout<<"-------------------------------"<<endl;
    int x[] = {6,7,9,6};
    int s = sizeof(x)/4;
    int product = 1;
    for (int j = 0;j<4;j++){
        product *= x[j];
    }
    cout<<product<<endl;
}
