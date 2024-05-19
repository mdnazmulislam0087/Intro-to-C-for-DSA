#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int *a = new int [n];
    for (int i=0; i <n; i++)
    {
        cin >> a[i];
    }
    // printing
    for (int i = 0 ; i<=n-1 ; i++)
    {
        cout << a[i]<<endl;
    }

    return 0;
}