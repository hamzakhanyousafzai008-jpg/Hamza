#include <iostream>
using namespace std;
int main(){
    string name = "Hamza Khan Yousafzai";
    int count = 0;
    for (int i= 0;i<name.length();i++){
        if (name[i]=='a' || name[i]=='e' || name[i]=='i'|| name[i]=='o'|| name[i]=='u' ){
            count ++ ;
        }
    }
    cout<<count;
}