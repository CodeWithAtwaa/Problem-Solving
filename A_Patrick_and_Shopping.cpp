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
void solve()
{
    // Code

    ll a, b, c;
    cin >> a >> b >> c;

    ll r1 = a + c + b;
    ll r2 = 2 * a + 2 * b;
    ll r3 = 2 *(a + c);
     ll r4 = 2 * (b + c);
     
    cout << min({r1, r2 , r3,r4});
    ln;
}

// ===================== حكمه ===================== //
// Don't stop when you're tired, stop when you're done.
// قولي غاب مش فاكره شكله   ******** قولي غاب و معاه مشكله
// ===================== حكمه ===================== //

// ===================== MAIN ===================== //
int main()
{
    ios;
    solve();
}
