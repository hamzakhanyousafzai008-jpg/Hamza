#include <iostream>
using namespace std;
int main(){
     int arr1[2][3];
     cout<<"Enter Elements :";
     for (int j=0;j<3;j++){
        for (int i= 0;i<2;i++){
            cin >> arr1[i][j];
        }
     }
     int arr2[2][3];
     for (int j = 0;j<3;j++){
        for (int i= 0;i<2;i++){
            arr2[i][j] = arr1[i][j]; 
        }
     }
     cout<<endl;
     for (int j = 0;j<3;j++){
        for (int i=0;i<2;i++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
     }
}