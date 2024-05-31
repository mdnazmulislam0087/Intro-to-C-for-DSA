#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase; t++)
    {
        string S, X;
        cin >> S >> X;
        while (S.find(X) != -1)
        {
            S.replace(S.find(X), X.size(), "#");
        }

        cout << S <<endl;
    }

    return 0;
}
