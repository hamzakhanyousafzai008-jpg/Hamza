#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks :";
    cin >> marks;
    if(marks>=90 and marks<=100){
        cout<<"grade is A:";
    }
    else if(marks>=80 and marks<=90){
        cout<<"grade is B:";
    }
    else if(marks>=70 and marks<=80){
        cout<<"grade is C:";
    }
    else if(marks>=60 and marks<=70){
        cout<<"grade is D:";
    }
    else if(marks>=101){
        cout<<"error";
    }
    else{
        cout<<"fail";
    }
        
    
}