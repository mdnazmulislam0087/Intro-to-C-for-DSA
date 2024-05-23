#include <bits/stdc++.h>

using namespace std;

int* sort_it(int arr[], int n)
{
    int* arr_1 = new int[n];
    for (int i = 0; i<n; i++)
    {
        arr_1[i] = arr[i];
    }
    sort(arr_1, arr_1+n , greater<int>());
    return arr_1;
}



int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int *res = sort_it(arr, n);
    for (int i = 0; i<n ; i++)
    {
        cout << res[i]<< " ";
    }
    delete [] res;


    return 0;
}
