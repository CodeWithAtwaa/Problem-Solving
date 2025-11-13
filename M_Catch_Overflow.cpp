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
    int q;
    cin >> q;
    stack<ll> s;
    ll x = 0;
    ll over = (1LL << 32);  // js left shift bts
    s.push(1);
    for (int i = 0; i < q; i++)
    {
        string str;
        cin >> str;

        if (str == "end")
        {
            s.pop();
        }
        else if (str == "for")
        {
            ll n;
            cin >> n;

            ll start = s.top();
            ll res = start * n;

            if (res >= over)
            {
                s.push(over);
            }
            else
            {
                s.push(res);
            }
        }
        else if (str == "add")
        {
            ll start = s.top();
            if (start >= over)
            {
                cout << "OVERFLOW!!!" << endl;
                return 0;
            }

            x += start;
            if (x >= over)
            {
                cout << "OVERFLOW!!!" << endl;
                return 0;
            }
        }
    }
    cout << x;
    ln;
}
