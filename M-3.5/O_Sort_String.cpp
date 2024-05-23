#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[1000001];
    cin >> n;
    getchar(); 
    cin.getline(s, 1000001);
    // sort (s,s+n);
    // cout << s<<endl;



    for (int i= 0; i <n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (s[i]> s[j])
            {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    cout << s<<endl;



    return 0;
}