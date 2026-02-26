#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :";
   // cin >> str;// To fix Space problrm in cin we use getlien:
    getline(cin,str);
    cout<<str;
}