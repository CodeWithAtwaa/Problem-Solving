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
    //  to read  n , arr
    // dd

    ll n;
    cin >> n;

    stack<ll> st;
    while (n--)
    {
        string s;
        int x;
        cin >> s;
        if (s == "push")
        {
            cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            st.pop();
        }
        else if (s == "top")
        {
            if (!st.empty())
            {
                cout << st.top();
                ln;
            }
        }
    }
}
