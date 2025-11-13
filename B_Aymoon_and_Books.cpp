#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <deque>
#include <queue>
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
    char x;
    cin >> n;
    deque<int> aa;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        aa.push_back(a);
    }
    priority_queue<int> ss;
    int q, it;
    cin >> q;
    for (int i = 0; i < q; i++)
    {

        cin >> x;
        if (aa.size())
        {
            if (x == 'L')
            {
                if (!aa.empty())
                {
                    ss.push(aa.front());
                    aa.pop_front();
                }
            }
            else if (x == 'R')
            {
                if (!aa.empty())
                {
                    ss.push(aa.back());
                    aa.pop_back();
                }
            }
        }
        if (x == 'Q')
        {
            if (ss.empty())
                cout << -1 << endl;
            else
            {
                it = ss.top();
                cout << it << endl;
                ss.pop();
            }
        }
    }
}