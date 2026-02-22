#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter n:";
    cin >> n;
    cout<<"Enter r:";
    cin >> r;
    int a = 1;// We save the factorial of n in a.
    for(int i = 1; i<=n; i++){
        a *= i;
    }
    int b = 1;// we save the factorial of R in b.
    for (int j=1;j<=r;j++){
        b *= j;
    }
    int c = 1;// we save the factorial of n-r in c. 
    for (int i = 1;i<=n-r;i++){
        c *= i;
    }
    cout<<a/(c*b);
}