#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll key = 0;
    cin >> key;
    bool found = false;
    // Linear search
    ll i = 0;
    for (; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << i << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}