#include <iostream>
#include <string>

using namespace std;

int main(){

    int s, e;


    string str1 = "This is a Data Structure using C++ With Rizwan Razzak";
    cout << "String before deletion -> " << str1 << endl;
    
    cout << "Enter Location from where to delete data from string: ";
    cin >> s;
    cout << endl;

    cout << "Enter end Location to delete data from string: ";
    cin >> e;
    cout << endl;

    str1.erase(s,e);
    cout << "String after deletion -> " << str1 << endl;
    
}