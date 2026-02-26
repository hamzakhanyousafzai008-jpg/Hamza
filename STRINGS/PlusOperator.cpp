#include <iostream>
using namespace std;
int main(){
    string s = "hamza";
    s = s + " khan";
    cout<<s<<" "<<s.length()<<endl;
    s = "Khan " + s;
    cout<<s<<" "<<s.length()<<endl;
}