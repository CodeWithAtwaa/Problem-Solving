#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll *prefix = new ll[n + 1];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    
    while (m--)
    {
        int l, h;
        cin >> l >> h;
        cout << prefix[h] - prefix[l - 1] << endl;
    }

    delete[] arr;
    delete[] prefix;
}
