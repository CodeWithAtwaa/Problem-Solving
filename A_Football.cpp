<<<<<<< HEAD
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
    str;
    int sz = s.size();

    // for zero
    int mx = -1;
    int cnt = 0;
    rep(i, sz)
    {
        if (s[i] == '0')
        {
            cnt++;
            mx = max(mx, cnt);
        }
        else
        {
            cnt = 0;
        }
    }


    // for one
    int cntz = 0;
    int mxz = -1;
    rep(i, sz)
    {

        if (s[i] == '1')
        {
            cntz++;
            mxz = max(mxz, cntz);
        }
        else
        {
            cntz = 0;
        }
    }

    // cout <<sz <<" " << mx << " " << mxz <<endl;

    
    int res = max(mx, mxz);
    if (res >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
=======
#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 temp.c++ -o temp
// gdb ./temp
// ctrl + shift + b
// f5

// ===================== MACROS ===================== //
#define rep(i, x, n) for (int i = x; i < (int)(n); i++)
#define all(vec) vec.begin(), vec.end()

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

#define str   \
    string s; \
    cin >> s;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

#define ln "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

#define dd     \
    int n;     \
    cin >> n;  \
    vi arr(n); \
    cin >> arr;

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1e6 + 5;

int getBit(int x, int index) { return (x >> index) & 1; }
int setBit(int x, int index) { return x | (1LL << index); }
int resetBit(int x, int index) { return x & (~(1LL << index)); }
int flipBit(int x, int index) { return x ^ (1LL << index); }

// Don't stop when you're tired, stop when you're done.
void Elwarda_Da3at_Fel_Mo7eet()
{
    str;
    int cntZero = 0, Cntone = 0;
    int mxZero = 0, mxOne = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            cntZero++;
            mxZero = max(mxZero, cntZero);
            Cntone = 0;
            continue;
        }
        else
        {
            cntZero = 0;
            Cntone++;
            mxOne = max(mxOne, Cntone);
        }
    }

    if (mxOne >= 7 || mxZero >= 7)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Elwarda_Da3at_Fel_Mo7eet();
    }
}
>>>>>>> 6bbdd32 (jan 15)
