#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter Elements :";
    for (int i = 0;i<2;i++){// i For Rows
        for (int j= 0;j<3;j++){ // j for columns
            cin >> arr[i][j];
        }
    }
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}