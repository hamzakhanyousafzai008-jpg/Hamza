#include<iostream>
using namespace std;
int main(){
    int len,width;
    int area;
    int perimeter;
    cout<<"the length is:";
    cin >> len;
    cout<<"the width is:";
    cin >> width;
    area  = len*width;
    perimeter = 2*(len+width);
    cout<<"Area = "<<area<<endl;
    cout<<"Permeter = "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"the area is greater ";
    }
    else if(perimeter>area){
        cout<<"the perimeter is greater";
    }
    return 0;







}