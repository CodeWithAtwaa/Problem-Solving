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
#define vis vector<string>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define all(vec) vec.begin(), vec.end()
#define repj(j, n) for (int j = i + 1; j < (int)n; j++)
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vis vector<string>
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

int MOD = 1000000 + 5;
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
        int n;
        cin >> n;
        string s;
        map<string, int> frq;
        map<int, vis> a;
        
        for (int k = 1; k < 4; k++)
        {
            rep(i,n)
            {
                cin >> s;
                a[k].push_back(s);
                frq[s]++;
            }
        }
        
        map<int, int> res;
        for (int i = 1; i < 4; i++)
        {
            int sz = a[i].size();
            rep(j,n)
            {
                s = a[i][j];
                if (frq[s] == 1)
                {
                   res[i] += 3;
                }
                else if (frq[s] == 2)
                {
                   res[i] += 1;
                }
                else if (frq[s] == 3)
                {
                   res[i] += 0;
                }
            }
        }

        cout << res[1] << " " << res[2] << " " << res[3];
        ln;
    }
}
