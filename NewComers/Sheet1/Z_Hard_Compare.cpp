#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653
#define ll long long
#define mx INT_MIN
#define mn INT_MAX
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long double left = B * log((long double)A);
    long double right = D * log((long double)C);

    if (left > right)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
