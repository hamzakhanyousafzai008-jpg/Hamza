#include <iostream>
using namespace std;
// We can use multiple functions in one another
void Usa(){
    cout<<"you are in USA"<<endl;
    return;
}
void Pakistan(){
    cout<<"you are in Pakistan"<<endl;
    Usa();

}
int main(){// int main(){}. This is a function.
    cout<<"I am in Pakistan"<<endl;
    Pakistan();
}