#include <iostream>
#include <vector>

using namespace std;


int main(){

    string s = "rizwan";

    char start = 'r';
    char end = 'w';
    string subString;

    vector<char> sub;

    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] == start)
        {
            sub.push_back(s[i]);
            for (int j = i + 1; j < s.length(); j++)
            {
                sub.push_back(s[j]);
                if (s[j] == end)
                    break;
            }            
        }
    }
    
    cout << s.substr(0, 4);

    for (auto c : sub)
    {
        subString.append(1,c);
    }

    cout << subString;
    

}