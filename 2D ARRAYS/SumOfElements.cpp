#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    int sum = 0;
    cout<<"Enter Elements:";
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            sum += arr[i][j];
        }
    }
    cout<<"The sum is :"<<sum;
}