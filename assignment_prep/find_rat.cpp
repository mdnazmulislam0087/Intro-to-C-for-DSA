#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    
    stringstream ss(s);
    string word;
    int flag =0;
    while (ss>>word)
    {
        if (word == "ratul")
        {
            flag =1;
        }
    }
    if (flag ==1)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}