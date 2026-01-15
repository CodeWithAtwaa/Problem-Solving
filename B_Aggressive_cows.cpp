#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canPlace(vector<ll> &pos, int c, ll d) {
    int count = 1;
    ll last_pos = pos[0];

    for (int i = 1; i < pos.size(); i++) {
        if (pos[i] - last_pos >= d) {
            count++;
            last_pos = pos[i];
        }
    }

    return count >= c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;
    vector<ll> pos(n);
    for (int i = 0; i < n; i++) cin >> pos[i];

    sort(pos.begin(), pos.end());

    ll lo = 1, hi = pos[n-1] - pos[0];
    ll ans = 1;

    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (canPlace(pos, c, mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
