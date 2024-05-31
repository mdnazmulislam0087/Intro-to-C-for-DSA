#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;

    string replaced_word = "EGYPT";
    while (s.find(replaced_word ) !=-1)
    {
        s.replace(s.find(replaced_word ) ,replaced_word.size(), " ");
    }
    
    
    cout << s<<endl;

}