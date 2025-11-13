#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653
#define ll long long
#define mx INT_MIN
#define mn INT_MAX
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int a, b;
    cin >> a >> b;
    int len = a + b;

    if (len == 0) {
        cout << "NO\n";
    } else if (len % 2 == 0) {
        cout << (a == b ? "YES\n" : "NO\n");
    } else {
        cout << (abs(a - b) == 1 ? "YES\n" : "NO\n");
    }
}
