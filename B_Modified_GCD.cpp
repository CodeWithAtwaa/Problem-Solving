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

int main()
{
    ios;

    ll a, b;
    cin >> a >> b;
    ll gcd = __gcd(a, b);
    int t = 1;
    cin >> t;

    vi divisors;
    for (ll i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            divisors.PB(i);
            if (i != gcd / i)
            {
                divisors.PB(gcd / i);
            }
        }
    }

    sort(all(divisors));

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        auto it = upper_bound(all(divisors), r);
        
        if (it == divisors.begin())
        {
            cout << -1 << ln;
        }
        else
        {
            it--;
            if (*it < l)
            {
                cout << -1 << ln;
            }
            else
            {
                cout << *it << ln;
            }
        }
    }
}
