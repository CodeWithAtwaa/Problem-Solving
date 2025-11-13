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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    int distinct = 0, ans = 0;

    for (int r = 0; r < n; r++)
    {
        int idx = s[r] - 'a';
        if (freq[idx] == 0)
            distinct++;
        freq[idx]++;

        if (r >= k)
        {
            int left = s[r - k] - 'a';
            freq[left]--;
            if (freq[left] == 0)
                distinct--;
        }

        ans = max(ans, distinct);
    }

    cout << ans << "\n";
}
