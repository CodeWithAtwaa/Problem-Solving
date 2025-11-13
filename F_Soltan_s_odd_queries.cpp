#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO";
#define yes cout << "YES";

#define dd                              \
    int n, q;                           \
    cin >> n >> q;                      \
    vi arr(n + 5), perf(n + 5); \
    for (int i = 1; i <= n; i++)        \
    {                                   \
        cin >> arr[i];                  \
        perf[i] = perf[i - 1] + arr[i]; \
    }

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

int main()
{
    ios;

    tc
    {
        dd

        ll max = perf[n];

        while (q--)
        {
            ll l, r, num;
            cin >> l >> r >> num;

            ll man = perf[r] - perf[l - 1];
            ll sums = max - man + (r - l + 1) * num;

            if (sums % 2 == 1)
            {
                yes ln
            }
            else
            {
                no ln
            }
        }
    }
}
