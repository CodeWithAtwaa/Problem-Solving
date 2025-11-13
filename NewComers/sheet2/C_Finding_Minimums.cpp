#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ll long long

using namespace std;
void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> result;

    for (ll i = 0; i < n; i += k)
    {
        ll mn = LLONG_MAX;
        for (ll j = i; j < min(i + k, n); j++)
        {
            mn = min(mn, arr[j]);
        }
        result.push_back(mn);
    }

    bool found = false;
    for (ll i = 0; i < result.size(); i++)
    {
        if (found)
        {
            cout << " ";
        }
        found = true;
        cout << result[i];
    }
    cout << endl;
}
