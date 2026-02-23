#include <iostream>
using namespace std;
long long factorial(long long x){
    int  f = 1;
    for (int i = 1;i<=x;i++){
        return f*=x;
    }
}
int main(){
    
    cout<<factorial(5);
}