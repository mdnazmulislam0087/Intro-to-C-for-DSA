#include <bits/stdc++.h>

using namespace std;



int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {   
        
        int n= strlen(s);
        
        // cout << n;
        sort(s, s+n);
        for (int i=0; i<n; i++)
        {
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout <<endl;
        // cout <<s<<endl;
    }

    return 0;
}
