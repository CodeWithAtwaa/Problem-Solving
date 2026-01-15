<<<<<<< HEAD
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
    cin >> n;
    cout << "Hello World!";
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

const int MOD = 1e9 + 7;

vi factor(ll n)
{
    vi ans;
    rep(i, 1, sqrt(n))
    {
        if (n % i == 0)
        {
            ans.PB(i);
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
    return ans;
}

vi prime_factor(ll n)
{
    vi ans;
    int x = 2;
    while (x > 1)
    {
        while (n % x == 0)
        {
            ans.PB(x);
            n = n / x;
        }
        x++;
    }
    return ans;
}

vi SPF(ll n)
{
    vi res;
    rep(i, 1, sqrt(n))
    {
        while (n % i == 0)
        {
            res.PB(i);
            n = n / i;
        }
    }
    if (n > 1)
        res.PB(n);
    return res;
}

vi sieve(ll n)
{
    vi is_prime(n + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

vi SPF_seive(ll n)
{
    vi spf(n + 1);
    rep(i, 1, n + 1)
    {
        spf[i] = i;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (ll j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    return spf;
}

ll powMod(ll a, ll b, ll mod)
{
    ll res = 1;
    a = a % mod;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        b = b >> 1;
        a = (a * a) % mod;
    }
    return res;
}

ll modInverse(ll a, ll mod)
{
    return powMod(a, mod - 2, mod);
}

int divid(ll a, ll b, ll m)
{
    ll inv = modInverse(b, m);
    return (a % m * inv % m) % m;
}

ll sum_rule(ll a, ll b)
{
    return (a % MOD + b % MOD) % MOD;
}

ll produc_rule(ll a, ll b)
{
    return (a % MOD * b % MOD) % MOD;
}

ll npr(ll n, ll r)
{
    ll res = 1;
    for (ll i = 0; i < r; i++)
    {
        res = produc_rule(res, (n - i));
    }
    return res;
}

ll ncr(ll n, ll r)
{
    ll num = npr(n, r);
    ll den = 1;
    for (ll i = 1; i <= r; i++)
    {
        den = produc_rule(den, i);
    }
    return divid(num, den, MOD);
}

ll fact(ll n)
{
    ll res = 1;
    rep(i, 1, n + 1)
    {
        res = produc_rule(res, i);
    }
    return res;
}


int main()
{

    return 0;
}
>>>>>>> 6bbdd32 (jan 15)
