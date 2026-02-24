#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter Elements :";
    for (int j = 0;j<3;j++){// j for columns
        for (int i= 0;i<2;i++){ // j for columns
            cin >> arr[i][j];
        }
    }
    for (int j = 0;j<3;j++){
        for (int i = 0;i<2;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}