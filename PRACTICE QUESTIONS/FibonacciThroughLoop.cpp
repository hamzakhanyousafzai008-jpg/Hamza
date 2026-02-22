#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n (nth Fibonacci number): ";
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    int a = 0, b = 1, fibo;
    for(int i = 2; i <= n; i++){
        fibo = a + b;  // sum of previous two numbers
        a = b;         // shift for next iteration
        b = fibo;
    }

    cout << fibo << endl; // nth Fibonacci number
}