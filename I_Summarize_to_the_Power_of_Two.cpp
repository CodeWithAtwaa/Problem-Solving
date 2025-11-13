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

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(vec) vec.begin(),vec.end()
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

int main()
{

    ios;

    int n;
    cin >> n;
    ll arr[n];
    rep(i, n) cin >> arr[i];
    sort(arr, arr + n);
    set<ll> s;
    for (int i = 0; i < 30; i++)
    {
        ll x = (2 << i);
        int l = 0, r = n - 1;
        while (l < r)
        {
            //    cout<<arr[l]<<" "<<arr[r]<<" "<<x<<endl;
            if (arr[l] + arr[r] == x)
            {
                s.insert(arr[l]);
                s.insert(arr[r]);
                l++;
                r--;
            }
            else if (arr[l] + arr[r] > x)
                r--;
            else
                l++;
        }
    }
    int ans = 0;
    rep(i, n) if (!s.count(arr[i])) ans++;
    cout << ans;
ln;
}

