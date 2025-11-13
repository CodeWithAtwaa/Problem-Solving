#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
    }
    cout << arr[0];
    for (ll i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
}