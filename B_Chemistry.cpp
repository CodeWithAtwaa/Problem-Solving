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

// ===================== MAIN ===================== //
int main()
{
    ios;
    tc {
        int n , k ;cin >> n >> k;
        string s ; cin >> s;
        map<int , int> m;
        //  key   value

        rep(i , n ) {
            m[s[i] - 'a']++;
        }   
        // cout << m.size() <<endl;
        // for(auto ch : m) {
        //     cout << ch.first << " " << ch.second << endl;
        // }

        ll odd = 0 ;
        for(auto  ch : m ) {
            if(ch.second %2 != 0) {
                odd++;
            }
        }

        if(k >= odd- 1 ) {
            yes;
        }else {
            no;
        }

    }
}
