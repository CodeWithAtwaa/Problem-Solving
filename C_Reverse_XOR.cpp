#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(unsigned int n) {
    return n && !(n & (n - 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        unsigned int n;
        cin >> n;

        if (n == 0 || !isPowerOfTwo(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
