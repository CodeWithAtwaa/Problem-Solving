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

        bool found = false;

        for (int i = 1; i <= n && !found; i++) {
            for (int j = i + 1; j <= n && !found; j++) {
                cout << i << " " << j << endl;
                cout.flush(); // important: send query immediately

                int x;
                cin >> x;     // read judge response

                if (x == -1) return 0;  // judge error or invalid query
                if (x == 1) {
                    // found working pair, stop this test case
                    found = true;
                }
            }
        }
    }

    return 0;
}
