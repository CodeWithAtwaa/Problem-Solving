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

ll count(ll n)
{
    ll cnt = 0;
    while (n % 2 == 0)
    {

        cnt++;
        n /= 2;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  18 24 7
    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x = count(arr[i]);
        if (x > mx)
            mx = x;
    }

    cout << mx << endl;
}
