#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int count = 0;
        int x = arr[i];
        while (x % 2 == 0) {
            x /= 2;
            count++;
        }
        ans = min(ans, count);
    }

    cout << ans << endl;

    delete[] arr;
    return 0;
}
