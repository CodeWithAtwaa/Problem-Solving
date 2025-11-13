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
    //  to read  n , arr
    // dd

    // 5
    //  5
    //  5 6
    //  6
    //  3 5 6
    //  6
    //  3 5
    //  5
    //  3
    //  3
    //  -
    ll n;
    cin >> n;
    priority_queue<ll> pq;
    while (n--)
    {
        string s;
        cin >> s;
        int x;
        if (s == "push")
        {
            cin >> x;
            pq.push(x);
        }
        else if (s == "pop")
        {
            pq.pop();
        }
        else if (s == "top")
        {
            cout << pq.top();
            ln;
        }
    }
}
