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
    ll n;
    cin >> n;
    deque<ll> dq;
    while (n--)
    {
        string s;
        cin >> s;

        ll x;

        if (s == "push_back")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "push_front")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "pop_front")
        {
            dq.pop_front();
        }
        else if (s == "pop_back")
        {
            dq.pop_back();
        }
        else if (s == "front")
        {
            cout << dq.front();
            ln;
        }
        else if (s == "back")
        {
            cout << dq.back();
            ln;
        }
        else if (s == "print")
        {
            cin >> x;
            cout << dq[x - 1];
            ln;
        }
    }
}
