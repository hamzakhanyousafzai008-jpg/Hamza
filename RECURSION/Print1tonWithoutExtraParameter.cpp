#include <iostream>
using namespace std;
void greet(int n){
    if(n==0) return;// This is Known is Base case.
    greet(n-1); // Call
    cout<<n<<endl; // Work
}
int main(){
    int n;
    cout<<"Enter n:";
    cin >> n;
    greet(n);
}