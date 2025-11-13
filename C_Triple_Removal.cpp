#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        for (int i=1; i<=n; i++) cin >> a[i];
        
        // prefix counts
        vector<int> pref0(n+1,0), pref1(n+1,0);
        for (int i=1; i<=n; i++) {
            pref0[i] = pref0[i-1] + (a[i]==0);
            pref1[i] = pref1[i-1] + (a[i]==1);
        }

        // store positions of 0s and 1s
        vector<int> pos0, pos1;
        for (int i=1; i<=n; i++) {
            if (a[i]==0) pos0.push_back(i);
            else pos1.push_back(i);
        }

        // prefix costs for 0s
        vector<long long> cost0(pos0.size()+1,0);
        for (int i=0; i+2<(int)pos0.size(); i+=3) {
            int p1=pos0[i], p2=pos0[i+1], p3=pos0[i+2];
            cost0[i+3] = cost0[i] + min(p2-p1, p3-p2);
        }
        // prefix costs for 1s
        vector<long long> cost1(pos1.size()+1,0);
        for (int i=0; i+2<(int)pos1.size(); i+=3) {
            int p1=pos1[i], p2=pos1[i+1], p3=pos1[i+2];
            cost1[i+3] = cost1[i] + min(p2-p1, p3-p2);
        }

        // position → index mapping
        vector<int> idx0(n+1,-1), idx1(n+1,-1);
        for (int i=0; i<(int)pos0.size(); i++) idx0[pos0[i]] = i+1;
        for (int i=0; i<(int)pos1.size(); i++) idx1[pos1[i]] = i+1;

        while (q--) {
            int l,r; cin >> l >> r;
            int cnt0 = pref0[r]-pref0[l-1];
            int cnt1 = pref1[r]-pref1[l-1];
            if (cnt0%3!=0 || cnt1%3!=0) {
                cout << -1 << "\n";
                continue;
            }
            // locate subarray positions in pos0 / pos1
            int left0 = (l>1 ? pref0[l-1] : 0);
            int right0 = pref0[r];
            long long ans0 = cost0[right0] - cost0[left0];
            
            int left1 = (l>1 ? pref1[l-1] : 0);
            int right1 = pref1[r];
            long long ans1 = cost1[right1] - cost1[left1];
            
            cout << ans0+ans1 << "\n";
        }
    }
}
