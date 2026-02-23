#include <iostream>
using namespace std;
void greet(int n){
    if(n==6) return;// This is Known is Base case.
    cout<<n<<endl;
    greet(n+1);
}
int main(){
    greet(1);
}