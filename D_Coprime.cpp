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

void Elwarda_Da3at_Fel_Mo7eet()
{
    ll n;
    cin >> n;
    vi arr(MOD, 0);
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr[x] = i;
    }

    ll mx = -1;
    for (int i = 1; i <= 1000 + 1; i++)
    {
        for (int j = 1; j <= 1000 + 1; j++)
        {
            if (arr[i] > 0 && arr[j] > 0)
            {
                if (gcd(i, j) == 1)
                {
                    ll m = arr[i] + arr[j];
                    mx = max(mx, m);
                }
            }
        }
    }

    cout << mx << endl;
}

int main()
{
    ios;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Elwarda_Da3at_Fel_Mo7eet();
    }
}
