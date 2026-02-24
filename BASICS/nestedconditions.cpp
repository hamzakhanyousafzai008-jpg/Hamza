#include<iostream>
using namespace std;
int main(){
    int abbas_age,hamza_age,rehan_age;
    cout<<"Enter abbas_age :";
    cin >> abbas_age;
    cout<<"Enter hamza_age :";
    cin >> hamza_age;
    cout<<"Enter rehan_age :";
    cin >> rehan_age;
    if(rehan_age<hamza_age){
        if(rehan_age<abbas_age){
            cout<<"Rehan is youngest :"<<rehan_age;
        }
        else{
            cout<<"abbas is youngest :"<<abbas_age;
        }
    }
    else{
        if(hamza_age<rehan_age){
            cout<<"hamza is youngest:"<<hamza_age;
        }
        else{
            cout<<"abbas is the youngest :"<<abbas_age;
        }
    }
    
}