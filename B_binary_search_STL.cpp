#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <stack>
#include <deque>
#include <queue>
#include <iterator>
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
    ll n;                      \
    cin >> n;                  \
    vi arr(n);                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];

#define dk                     \
    ll n, k;                   \
    cin >> n >> k;             \
    vi arr(n);                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];

#define str   \
    string s; \
    cin >> s;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

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

    fastio;
    int n, q;
    cin >> n >> q;
    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    while (q--)
    {
        string s;
        long long x;
        cin >> s >> x;

        if (s == "binary_search")
        {
            if (binary_search(arr.begin(), arr.end(), x))
                cout << "found\n";
            else
                cout << "not found\n";
        }
        else if (s == "lower_bound")
        {
            auto it = lower_bound(arr.begin(), arr.end(), x);
            if (it != arr.end())
                cout << *it << "\n";
            else
                cout << "-1\n";
        }
        else if (s == "upper_bound")
        {
            auto it = upper_bound(arr.begin(), arr.end(), x);
            if (it != arr.end())
                cout << *it << "\n";
            else
                cout << "-1\n";
        }
    }
}
