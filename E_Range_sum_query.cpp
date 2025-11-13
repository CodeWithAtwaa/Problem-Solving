#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n, k;
    cin >> n >> k;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> prefix(n);
    prefix[0] = arr[0];
    for (ll i = 1; i < n; ++i)
        prefix[i] = prefix[i - 1] + arr[i];

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        ll sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
        cout << sum << "\n";
    }
}
