#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l = 1, r = 1000000;
    int ans = 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        cout << mid << '\n';
        cout.flush();
        string response;
        cin >> response;
        if (response == ">=") {
            ans = mid;
            l = mid + 1;
        } else if (response == "<") {
            r = mid - 1;
        }
    }

    cout << "! " << ans << '\n';
    cout.flush();
    return 0;
}
