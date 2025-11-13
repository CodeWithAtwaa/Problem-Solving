#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n);
        long long sum = 0, mx = 0;
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        long long ans = m * sum - (m - 1) * mx;
        cout << ans << "\n";
    }
}
