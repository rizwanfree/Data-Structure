#include <iostream>
#include <vector>

using namespace std;


int findChar(string &s, char ch)
{
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
            return i;
    }
    return -1;
    
}

int main(){

    string s = "geeksforgeeks";
    char k = 'k';
    vector<int> idxs;


    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == k)
        {
            idxs.push_back(i);
        }
    }

    for (int i : idxs)
    {
        cout << i << endl;
    }
    
    

    // if (idx != string::npos)
    //     cout << idx << endl;
    // else
    //     cout << -1;
    return 0;

}