#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"=========MENUE========:"<<endl;
    cout<<"FOR TEA ENTER 1:"<<endl;
    cout<<"FOR COFFEE ENTER 2 :"<<endl;
    cout<<"FOR JUICE ENTER 3 :"<<endl;
    cout<<"Enter a number :";
    cin >> num;
    switch(num){
        case 1:
            cout<<"Tea";
            break;
        case 2:
            cout<<"coffee";
            break;
        case 3:
            cout<<"juice";
            break;
        default:
            cout<<"invalid";
            break;
        
    }
}