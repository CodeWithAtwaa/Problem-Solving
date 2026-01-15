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
    ll n;
    cin >> n;

    ll cnt = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll res = 0;

            while (n % i == 0)
            {
                n /= i;
                res++;
            }
            cnt *= (res + 1);
        }
    }

    if (n > 1)
    {
        cnt *= 2;
    }
    cout << cnt << ln;
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
