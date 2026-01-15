#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            for (int i = 0; i < 32; i++) {
                if ((n & (1 << i)) == 0) {
                    n |= (1 << i);
                    break;
                }
            }
            cout << n << "\n";
        } else if (type == 2) {
            for (int i = 0; i < 32; i++) {
                if ((n & (1 << i))) {
                    n &= ~(1 << i);
                    break;
                }
            }
            cout << n << "\n";
        } else if (type == 3) {
            if (n == 0) {
                n = -1;
            } else {
                for (int i = 0; i < 32; i++) {
                    if ((n & (1 << i))) {
                        for (int j = 0; j <= i; j++) n |= (1 << j);
                        break;
                    }
                }
            }
            cout << n << "\n";
        } else if (type == 4) {
            for (int i = 0; i < 32; i++) {
                if ((n & (1 << i)) == 0) {
                    for (int j = 0; j <= i; j++) n &= ~(1 << j);
                    break;
                }
            }
            cout << n << "\n";
        } else if (type == 5) {
            if (n > 0 && (n & (n - 1)) == 0) cout << "is power of two\n";
            else cout << "not power of two\n";
        }
    }

    return 0;
}
