#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    int mn = INT16_MAX;
    cout<<"Enter Elements :";
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            mn = min(mn,arr[i][j]);
        }
    }
    cout<<"The Manimum number is:"<<mn;
}