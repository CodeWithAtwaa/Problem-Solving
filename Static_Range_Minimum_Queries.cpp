#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
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

#define dd                     \
    ll n, k;                   \
    cin >> n >> k;             \
    vi arr(n);                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

// void ATWAA()
// {
//     cout << "======================================================================" << endl;
//     cout << "======================================================================" << endl;
//     cout << "======================================================================" << endl;

//     cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
//     cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
//     cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
//     cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
//     cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

//     cout << "======================================================================" << endl;
//     cout << "======================================================================" << endl;
//     cout << "======================================================================" << endl;
// }

// int main()
// {

//     ios;
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> arr(n);

//     for (ll i = 0; i < n; i++)
//         cin >> arr[i];

//     while (k--)
//     {
//         ll l, r;
//         cin >> l >> r;
//         --l;
//         --r;
//        ll mn = *min_element(arr.begin() + l, arr.begin() + r + 1);

//         cout << mn;
//         ln;
//     }
// }




int main() {
  ios;

   int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int LOG = log2(n) + 1;
    vector<vector<long long>> st(n, vector<long long>(LOG));

    for (int i = 0; i < n; i++) {
        st[i][0] = arr[i];
    }

    for (int j = 1; j < LOG; j++) {
        int len = 1 << j;
        int Nosa = len / 2;
        for (int i = 0; i + len <= n; i++) {
            st[i][j] = min(st[i][j - 1], st[i + Nosa][j - 1]);
        }
    }

    vector<int> res(n + 1);
    res[1] = 0;
    for (int i = 2; i <= n; i++) {
        res[i] = res[i / 2] + 1;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int j = res[r - l + 1];
        int len = 1 << j;
        long long temp = min(st[l][j], st[r - len + 1][j]);
        cout << temp << "\n";
    }

    return 0;
}