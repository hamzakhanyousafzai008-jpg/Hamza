#include <iostream>
using namespace std;
long long fact(long long x){
    long long f = 1;
    for(int i = 1;i<=x;i++){
        f *= i;
    }
    return f; 
}
int main(){
    long long result = fact(4);
    cout<<"Factorial of X is = "<<result<<endl;
}