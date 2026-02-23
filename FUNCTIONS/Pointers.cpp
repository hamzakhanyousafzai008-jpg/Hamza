#include <iostream>
using namespace std;
int main(){
    // Printing address:
    int x = 23;
    int* ptr = &x;
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<*ptr<<endl;// with the help of *ptr it will print the value inside the pointer.
    // NOTE: Pointer has also their address because it also gain the space in memeory.
    cout<<&ptr<<endl;
    //(0x61ff08)this is the address of pointer.
    // NOTE: We also update the value of an integer through pointers.
    *ptr = 50;
    cout<<*ptr<<endl;
    cout<<x<<endl;
}