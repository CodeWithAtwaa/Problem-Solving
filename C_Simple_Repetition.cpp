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

#define st stack<ll>
#define qu queue<ll>
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

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);


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

// ===================== MAIN ===================== //

// 2 3 5 7 11 13 17 
// 4 6 8 10 

bool isPrime(ll n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main()
{
    FAST_IO
    tc
    {ll x; int k;
        cin >> x >> k;
        if (k == 1) {
            cout << (isPrime(x) ? "YES\n" : "NO\n");
        } else {
            if (x != 1) {
                cout << "NO\n";
            } else {
                ll y = 0;
                for (int i = 0; i < k; ++i) y = y * 10 + 1;
                cout << (isPrime(y) ? "YES\n" : "NO\n");
            }
        }
    }
}
