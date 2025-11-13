#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 temp.c++ -o temp
// gdb ./temp
// ctrl + shift + b
// f5

// ===================== MACROS ===================== //
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(vec) vec.begin(), vec.end()

#define str   \
    string s; \
    cin >> s;

#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

#define s stack<ll>
#define q queue<ll>
#define mp map<ll, ll>
#define ump unordered_map<ll, ll>
#define ust unordered_set<ll>

#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

#define ln cout << endl;
#define no cout << "NO\n";
#define yes cout << "YES\n";

#define dd     \
    int n;     \
    cin >> n;  \
    vi arr(n); \
    rep(i, n) cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1e6 + 5;

// ===================== BANNER ===================== //
void ATWAA()
{
    cout << "======================================================================\n";
    cout << "======================================================================\n";
    cout << "======================================================================\n";

    cout << "|||      *****     *********  *     *     *****     *****             |||\n";
    cout << "|||     *     *        *      *     *    *     *   *     *            |||\n";
    cout << "|||     *******        *      *  *  *    *******   *******            |||\n";
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||\n";
    cout << "|||     *     *        *       *   *     *     *   *     *            |||\n";

    cout << "======================================================================\n";
    cout << "======================================================================\n";
    cout << "======================================================================\n";
}

// ===================== SOLVE ===================== //
// int solve()
// {
//     // Code
// }

// ===================== حكمه ===================== //
// Don't stop when you're tired, stop when you're done.
// قولي غاب مش فاكره شكله  ********  قولي مات و معاه مشكله
// ===================== حكمه ===================== //

bool can(double mid, vector<double> &area, double f)
{
    int cnt = 0;
    rep(i, area.size())
    {
        cnt += area[i] / mid;
        if (cnt >= f)
        {
            return true;
        }
    }
    return cnt >= f;
}

// ===================== MAIN ===================== //
int main()
{
    ios;

    tc
    {
        double n, m;
        cin >> n >> m;

        m++;
        vector<double> arr(n);
        rep(i, n) cin >> arr[i];

        vector<double> area(n);
        rep(i, n)
        {
            area[i] = arr[i] * arr[i] * acos(-1);
        }

        double l = 1, r = *max_element(all(area)), mid, ans;
        for (int i = 0; i < 100; i++)
        {
            mid = l + (r - l) / 2;
            if (can(mid, area, m))
            {
                ans = mid;
                l = mid;
            }
            else
            {
                r = mid;
            }
        }

        cout << fixed << setprecision(4) << ans << endl;
    }
}
