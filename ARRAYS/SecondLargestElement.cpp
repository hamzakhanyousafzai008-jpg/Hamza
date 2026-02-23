#include <iostream>
using namespace std;
int main(){
    int arr[] = {10,1,0,9,4,12,1,2};
    int mx = INT32_MIN;
    for (int i = 0;i<8;i++){
        mx = max(arr[i],mx);
    }
    int smax = INT32_MIN;
    for (int i = 0;i<8;i++){
        if (arr[i]!=mx) smax = max(smax,arr[i]);
    }
    cout<<"The Largest value is : "<<mx<<endl;
    cout<<"The second largest is : "<<smax<<endl;
}