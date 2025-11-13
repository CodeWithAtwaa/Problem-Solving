#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m), c(m);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        for (auto &x : c) cin >> x;

        sort(a.begin(), a.end());

        vector<pair<ll,ll>> monsters(m);
        for (int i = 0; i < m; i++) monsters[i] = {b[i], c[i]};
        sort(monsters.begin(), monsters.end());

        multiset<ll> swords(a.begin(), a.end());
        int kills = 0;

        for (auto [life, gain] : monsters) {
            auto it = swords.lower_bound(life);
            if (it == swords.end()) continue;
            ll sword = *it;
            swords.erase(it);
            kills++;

            if (gain > 0)
                swords.insert(max(sword, gain));
        }

        cout << kills << "\n";
    }
    return 0;
}
