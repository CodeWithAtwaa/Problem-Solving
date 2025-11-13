// #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1), val(n + 1), pref(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            // القيمة = floor(log2(a[i]))
            val[i] = 63 - __builtin_clzll(a[i]); 
            pref[i] = pref[i - 1] + val[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << "\n";
        }
    }
    return 0;
}
