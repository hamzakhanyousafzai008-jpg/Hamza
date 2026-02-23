#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int arr[] = {1,5,6,4,3,550,0};
    int mx = arr[0];
    for (int i = 1;i<7;i++){
        //if(arr[i]>mx) mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<mx;
}