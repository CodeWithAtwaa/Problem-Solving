#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int s = digitSum(i);
        if (s >= A && s <= B) {
            ans += i;
        }
    }

    cout << ans << endl;
    return 0;
}

