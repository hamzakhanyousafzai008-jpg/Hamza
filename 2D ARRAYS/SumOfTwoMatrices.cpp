#include <iostream>
using namespace std;
int main(){
    int arr1[2][3];
    cout<<"Enter Elements of array 1 :";
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            cin >> arr1[i][j];
        }
    }
    int arr2[2][3];
    cout<<"Enter Elements of array 2 :";
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            cin >> arr2[i][j];
        }
    }
    int arr3[2][3];
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}