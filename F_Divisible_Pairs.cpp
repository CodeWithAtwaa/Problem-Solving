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
    int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<pair<long long, long long>, long long> freq;
        long long count = 0;

        for (int i = 0; i < n; i++) {
            long long r_x = a[i] % x;
            long long r_y = a[i] % y;

            long long r_x_needed = (-r_x % x + x) % x;
            long long r_y_needed = r_y;

            pair<long long, long long> key_needed = {r_x_needed, r_y_needed};
            if (freq.count(key_needed)) {
                count += freq[key_needed];
            }

            pair<long long, long long> key_current = {r_x, r_y};
            freq[key_current]++;
        }

        cout << count << "\n";
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

bool isLucky(int x)
{
    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

vi getLuckyNumbers(int n)
{
    vi lucky;
    for (int i = 1; i <= n; i++)
    {
        if (isLucky(i))
        {
            lucky.push_back(i);
        }
    }
    return lucky;
}