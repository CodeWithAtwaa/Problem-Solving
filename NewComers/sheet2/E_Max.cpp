#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout<<mx << endl;

    delete[] arr;
}