#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // If no "2025", already good
        if (s.find("2025") == string::npos) {
            cout << 0 << "\n";
            continue;
        }

        // If contains "2026", already good
        if (s.find("2026") != string::npos) {
            cout << 0 << "\n";
            continue;
        }

        int INF = 1e9;
        int ans = INF;

        // Option 1: create "2026"
        string target = "2026";
        for (int i = 0; i + 3 < n; i++) {
            int cost = 0;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != target[j]) cost++;
            }
            ans = min(ans, cost);
        }

        // Option 2: break all "2025"
        vector<int> cnt(n, 0);
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") {
                for (int j = 0; j < 4; j++) {
                    cnt[i + j]++;
                }
            }
        }

        int break_cost = 0;
        for (int x : cnt) {
            if (x > 0) break_cost++;
        }

        ans = min(ans, break_cost);
        cout << ans << "\n";
    }
}
