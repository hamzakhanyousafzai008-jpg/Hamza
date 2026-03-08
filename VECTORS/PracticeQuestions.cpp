#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {23,45,67,89,89};
    for (int i : vec){
        cout<< i << "  ";
    }
}