#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,0,10,2,5,6,8,9,22,13,66,78,99,23};
    int n = sizeof(arr)/4;
    int x = 4;
    int count = 0;
    for (int i = 0;i<n;i++){
        if (arr[i]>x) count ++ ;   
    }
    cout<<count<<" ";

}