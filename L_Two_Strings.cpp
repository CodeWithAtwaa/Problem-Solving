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

#define ull unsigned long long
#define ll long long
#define vi vector<int>
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
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        map<char, set<int>> mp;
        rep(i, n)
        {
            ll x;
            cin >> x;
            mp[s[i]].insert(x);
        }
        string t1 = s, t2 = t;
        sort(all(t1));
        sort(all(t2));
        if (t1 != t2)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = 0;
        rep(i, n)
        {
            if (s[i] != t[i])
            {
                bool temp = 0;
                for (auto it : mp[t[i]])
                {
                    if (mp[s[i]].count(it))
                    {
                        temp = 1;
                        break;
                    }
                }
                if (!temp)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
