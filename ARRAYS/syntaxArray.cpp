#include <iostream>
using namespace std;
int main(){
    int arr[5]; // decleration of array
    cout<<"Enter array elements :";
    for (int i = 0;i<=4;i++){
        cin >> arr[i];
    }
    for (int i = 0;i<=4;i++){ // Printing of array;
        cout<<arr[i]<<" "<<endl;
    }
    arr[0] = 100;// We update array.
    for (int i = 0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}