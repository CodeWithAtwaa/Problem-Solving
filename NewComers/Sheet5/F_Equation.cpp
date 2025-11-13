#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int equation(int X, int N) {
    int sum = 0;
    sum += (power(X, 0) - 1);
    for (int i = 2; i <= N; i += 2) {
        sum += power(X, i);
    }
    return sum;
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << equation(X, N) << endl;
    return 0;
}
