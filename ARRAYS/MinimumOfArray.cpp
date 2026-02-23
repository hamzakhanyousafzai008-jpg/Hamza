#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int arr[] = {1,5,6,4,-8,550,0};
    int mn = arr[0];
    for (int i = 1;i<7;i++){
        if(arr[i]<mn) mn = arr[i];
         //mn = min(mn,arr[i]);
    }
    cout<<mn;
}