#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char s[1000001];
    cin >> n;
    getchar(); 
    cin.getline(s, 1000001);
    int p= strlen(s)+1;
    cout <<p <<endl;
    cout <<s;
    sort (s,s+n);
    cout << s<<endl;

    return 0;
}
