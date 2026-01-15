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

enum Shapes
{
    Tetrahedron = 4,
    Cube = 6,
    Octahedron = 8,
    Dodecahedron = 12,
    Icosahedron = 20
};

map<string, int> mp{make_pair("Tetrahedron", 4), make_pair("Cube", 6), make_pair("Octahedron", 8), make_pair("Dodecahedron", 12), make_pair("Icosahedron", 20)};
// logN


void Kosomak_Etla3_Barra()
{
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    for(int i =0  ; i < n ;i++) {
        cin >> s ;
        cnt +=mp[s];
    }
    cout << cnt << endl;
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
