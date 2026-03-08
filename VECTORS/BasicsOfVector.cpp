#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec(7,0);
    
    for (int i: vec) { // This is known as for each loop .
        cout<< i <<endl;
    }

    return 0;
}