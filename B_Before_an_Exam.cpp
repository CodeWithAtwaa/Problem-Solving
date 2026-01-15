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

void Kosomak_Etla3_Barra()
{
    int d, t;
    cin >> d >> t;

    vi mn(d), mx(d), res(d);
    int minn = 0, maxn = 0;

    rep(i, 0, d)
    {
        cin >> mn[i] >> mx[i];
        minn += mn[i];
        maxn += mx[i];
        res[i] = mn[i];
    }

    if (t < minn || t > maxn)
    {
        no;
        return;
    }

    int diff = t - minn;

    for (int i = 0; i < d && diff > 0; i++)
    {
        int add = min((ll)diff, mx[i] - mn[i]);
        res[i] += add;
        diff -= add;
    }

    cout << "YES\n";
    for (int i = 0; i < d; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Kosomak_Etla3_Barra();
    }
}
