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
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pr pair<int, int>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define all(vec) vec.begin(),vec.end()
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
    tc
    {
        ll n, m, k;
        cin >> n >> m >> k;
        priority_queue<ll, vi, greater<ll>> pq;
        vi v;
        int cnt = 0;
        rep(i, n)
        {
            ll x;
            cin >> x;
            pq.push(x);
            cnt++;
            if (cnt == m)
            {
                v.push_back(pq.top());
                pq.pop();
                cnt--;
            }
        }
        while (!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        cout << v[k - 1] << endl;
    }
}
