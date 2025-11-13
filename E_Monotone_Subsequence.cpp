#include <bits/stdc++.h>
using namespace std;

// Function to reconstruct LIS/LDS
vector<int> LIS(vector<int>& p, bool increasing = true) {
    int n = p.size();
    vector<int> dp(n), parent(n, -1);
    vector<int> tail;  // stores indices
    for (int i = 0; i < n; i++) {
        int x = p[i];
        int pos;
        if (increasing)
            pos = lower_bound(tail.begin(), tail.end(), x,
                              [&](int idx, int val) { return p[idx] < val; }) - tail.begin();
        else
            pos = lower_bound(tail.begin(), tail.end(), x,
                              [&](int idx, int val) { return p[idx] > val; }) - tail.begin();

        if (pos == (int)tail.size()) tail.push_back(i);
        else tail[pos] = i;

        if (pos > 0) parent[i] = tail[pos - 1];
        dp[i] = pos + 1;
    }

    // Reconstruct subsequence
    vector<int> seq;
    int cur = tail.back();
    while (cur != -1) {
        seq.push_back(cur + 1); // +1 for 1-based index
        cur = parent[cur];
    }
    reverse(seq.begin(), seq.end());
    return seq;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int len = n*n + 1;
        vector<int> p(len);
        for (int i = 0; i < len; i++) cin >> p[i];

        vector<int> inc = LIS(p, true);
        vector<int> dec = LIS(p, false);

        if ((int)inc.size() >= n+1) {
            cout << "! ";
            for (int i = 0; i < n+1; i++) cout << inc[i] << " ";
            cout << "\n";
        } else {
            cout << "! ";
            for (int i = 0; i < n+1; i++) cout << dec[i] << " ";
            cout << "\n";
        }
    }
}

