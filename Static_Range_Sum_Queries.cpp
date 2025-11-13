#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO";
#define yes cout << "YES";

#define dd                     \
    ll n, k;                   \
    cin >> n >> k;             \
    vi arr(n);                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

void ATWAA()
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

    ios;
    ll n, k;
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
        ll l, r;
        cin >> l >> r;
        --l;
        --r;
        ll sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
        cout << sum << "\n";
    }
}
