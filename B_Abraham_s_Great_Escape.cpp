#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
// #define ull unsigned long long
// #define ll long long

using namespace std;

void LOGO()
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
using ll = long long;
const ll MOD = 676767677LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        vector<ll> b(n+1);
        for (int i = 1; i <= n; ++i) b[i] = a[i] - (ll)(n - i + 1);

        vector<ll> S(n+1);
        S[0] = 0;
        for (int i = 1; i <= n; ++i) {
            S[i] = b[i] - S[i-1];
        }

        if (n % 2 == 0) {
            ll L_n = S[n];
            bool ok = true;
            vector<ll> L(n+1);
            L[0] = 0;
            for (int i = 1; i <= n; ++i) {
                if (i % 2 == 0) L[i] = S[i];
                else L[i] = S[i] + L_n;
            }
            for (int i = 1; i <= n && ok; ++i) {
                if (L[i] < 0 || L[i] > i) ok = false;
                ll d = L[i] - L[i-1];
                if (!(d == 0 || d == 1)) ok = false;
            }
            cout << (ok ? 1 : 0) << '\n';
        } else {
            if (S[n] != 0) {
                cout << 0 << '\n';
                continue;
            }
            const ll INF = (ll)4e18;
            ll low = -INF, high = INF;
            low = max(low, 0LL);
            high = min(high, (ll)n);
            bool possible = true;

            for (int i = 1; i <= n; ++i) {
                ll delta = S[i] - S[i-1];
                if (i % 2 == 0) {
                    ll l = delta - 1;
                    ll r = delta;
                    low = max(low, l);
                    high = min(high, r);
                    if (S[i] < 0 || S[i] > i) possible = false;
                } else {
                    ll l = -delta;
                    ll r = 1 - delta;
                    low = max(low, l);
                    high = min(high, r);
                    ll l2 = -S[i];
                    ll r2 = (ll)i - S[i];
                    low = max(low, l2);
                    high = min(high, r2);
                }
                if (low > high) { possible = false; break; }
            }

            if (!possible || low > high) {
                cout << 0 << '\n';
            } else {
                ll L = (ll)ceil((long double)low);
                ll R = (ll)floor((long double)high);
                if (R < L) {
                    cout << 0 << '\n';
                } else {
                    ll cnt = R - L + 1;
                    cnt %= MOD;
                    cout << cnt << '\n';
                }
            }
        }
    }
    return 0;
}
