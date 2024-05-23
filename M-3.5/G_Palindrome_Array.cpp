#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr [n];
    for (int i =0; i<n; i++)
    {
        cin >> arr[i];
    }

    int flag = 0;
    int q;
    q=n-1;
    for (int i =0; i<n ; i++)
    {
        for (int j=q; j>=q; j--)
        {
            if (i==j)
            {
                break;
            }
            else
            {
                if (arr[i] != arr[j])
                {
                    flag = 1;
                }
            }
        }
        q--;
    }
    if (flag == 0)
    {
        cout <<"YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}