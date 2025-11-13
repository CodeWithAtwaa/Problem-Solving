#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <algorithm>
#include <deque>
#include <queue>

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define all(vec) vec.begin(), vec.end()
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO";
#define yes cout << "YES";

#define dd                      \
    int n;                      \
    cin >> n;                   \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
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

// g++ testing.c++ -o testing && testing

// must be sorted asc (1 2 3)
// Lower_bound() => first element greater than or equal elemnt(index) >= x
// Upper() => first element greater  elemnt(index) > x
ll n, m;

bool can(ll mid, vi &arr, vi &arr2)
{
    ll need = 0;
    rep(i, n)
    {
        if (arr2[i] >= arr[i] * mid)
        {
            continue;
        }
        else
        {
            need += (arr[i] * mid) - arr2[i];
            if (need > m)
            {
                return false;
            }
        }
    }
    return need <= m;
}
int main()
{

    ios;
    cin >> n >> m;
    vi arr(n);
    vi arr2(n);
    rep(i, n)
    {
        cin >> arr[i];
    }
    rep(i, n)
    {
        cin >> arr2[i];
    }

    ll l = 0;
    ll r = 2e9;
    ll ans = -1;

    while (l <= r)
    {
        ll mid = (r + l) / 2;
        if (can(mid, arr, arr2))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}
