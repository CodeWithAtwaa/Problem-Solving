#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, rK, cK, rD, cD;
        cin >> n >> rK >> cK >> rD >> cD;

        // أقرب مسافة للركن
        long long dK = min(rK, n - rK) + min(cK, n - cK);
        long long dD = min(rD, n - rD) + min(cD, n - cD);

        if (dK < dD) {
            cout << -1 << "\n";
        } else {
            cout << max(abs(rK - rD), abs(cK - cD)) << "\n";
        }
    }
    return 0;
}
