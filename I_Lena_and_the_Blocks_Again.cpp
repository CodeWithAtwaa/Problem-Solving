#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
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

    dd;
    int mn = *min_element(arr.begin(), arr.end()); // 1
    int mx = *max_element(arr.begin(), arr.end()); // 2

    int ans = INT_MAX;
    int minn = -1, maxxxx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
        {
            minn = i;
            if (maxxxx != -1)
                ans = min(ans, abs(minn - maxxxx));
        }
        if (arr[i] == mx)
        {
            maxxxx = i;
            if (minn != -1)
            {
                ans = min(ans, abs(minn - maxxxx));
            }
        }
    }

    cout << ans << '\n';
}
