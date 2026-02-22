#include <iostream>
using namespace std;
long long fact(int x){
    long long f = 1;
    for (int i=1;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin >> n;
    cout<<"Enter r:";
    cin >> r;
    long long a = fact(n);
    long long b = fact(n-r);
    cout << n << "! = " << a << endl;
cout << n << "P" << r << " = " << a/b;
} 