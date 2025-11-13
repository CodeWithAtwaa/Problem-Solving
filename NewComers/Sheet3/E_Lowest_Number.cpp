#include <iostream>
#include <string>
#include <cmath>
#define ll long long
// #define mn INT_MAX
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mn = INT_MAX;
    ll i = 0;
    ll index = 0;
    for (; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            index = i;
        }
    }
    cout << mn << " " << index + 1 << endl;
}
