#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int frq[26]={0};
    for(char c:s)
    {
        // cout << c<<endl;
        frq[c-'a']++;
    }
    for (char i ='a'; i <='z'; i++)
    {
        cout << i <<"-"<< frq[i-'a'] << endl;
    }

    return 0;
}