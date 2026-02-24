#include <iostream>
using namespace std;
int main (){
    int arr[2][3];
    int mx = INT16_MIN;
    cout<<"Enter Elements :";
    for (int i = 0;i<2;i++){
        for (int j= 0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            mx = max(mx,arr[i][j]);
        }
    }
      for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"The Maximum Number is :"<<mx;
}
