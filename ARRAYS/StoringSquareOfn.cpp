#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin >> n;
    int arr[n];
    for (int i = 0;i<n;i++){
        arr[i]  = i * i * i;// For Index.
    }
    for (int i = 1;i<n;i++){
        cout<<arr[i]<<" "; // For Element Excess.
    }
}