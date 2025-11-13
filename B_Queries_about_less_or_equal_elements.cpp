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
int main()
{

    ios;

    ll n, m;
    cin >> n >> m;
    vi arr1(n);
    vi arr2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    sort(all(arr1));
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    // 0 1 2 3 4
    // 1 3 5 7 9
    // 6 2 4 8
    for (int i = 0; i < m; i++)
    {
        auto it = upper_bound(all(arr1), arr2[i]);
        if (it != arr1.end())
        {
            cout << it - arr1.begin() << ' ';
        }
        else
        {
            cout << n << ' ';
        }
    }

    cout << endl;
}
