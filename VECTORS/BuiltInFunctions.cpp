#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <char> vec;

    cout<<"size = " << vec.size () <<endl;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('c');
    vec.push_back('d');
    vec.push_back('e');

    cout<<"Size after push back = " <<vec.size() << endl;
    //  vec.pop_back();
    
  //  cout<< vec.front() << endl;
   // cout << vec.at(2) << endl;
   cout << vec.size() << endl;
   cout<< vec.capacity() << endl;

    return 0;
}