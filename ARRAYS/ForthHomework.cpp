#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,3,0,10,2,5,6};
    int n = sizeof(arr)/4;
    int even_sum = 0;
    int odd_sum = 0;
    for (int i = 0;i<n;i++){
        if (i%2==0){
            even_sum += arr[i];
        }
        else{
            odd_sum += arr[i];
        }
    }
    cout<<"The difference is : "<<even_sum - odd_sum ;
}