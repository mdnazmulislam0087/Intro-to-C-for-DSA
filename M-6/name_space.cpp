#include <bits/stdc++.h>

using namespace std;
namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << " rakib namespace";
    }
}
namespace Sakib
{
    int age = 54;
    void hello2()
    {
        cout << " rakib namespace";
    }
}

using namespace Rakib;
// using namespace Sakib;
int main()
{
    // cout <<Rakib :: age <<endl;
    cout <<age <<endl;
    cout <<Sakib :: age <<endl;

    return 0; 
}