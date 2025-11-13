#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, set<int>> points; 

    while (n--) {
        string op;
        int x, y;
        cin >> op >> x >> y;

        if (op == "add") {
            points[x].insert(y);
        } 
        else if (op == "remove") {
            points[x].erase(y);
            if (points[x].empty()) {
                points.erase(x);
            }
        } 
        else if (op == "find") {
            auto it = points.upper_bound(x); 
            pair<int, int> ans = {-1, -1};
            while (it != points.end()) {
                auto &s = it->second;
                auto itY = s.upper_bound(y);
                if (itY != s.end()) {
                    ans = {it->first, *itY};
                    break; 
                }
                ++it;
            }
            if (ans.first == -1) {
                cout << -1 << "\n";
            } else {
                cout << ans.first << " " << ans.second << "\n";
            }
        }
    }
    return 0;
}
