#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    ss>>word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        // cout << word.size() << " ";
        // int i = 0;
        // int j = word.size()-1;

        // while (i <= j)
        // {
        //     swap(word[i], word[j]);
        //     i++;
        //     j--;
        // }
        // cout << word <<" ";
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    // word.pop_back();
    return 0;
}