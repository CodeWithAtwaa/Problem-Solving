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

    long long n, m, k;
    if (!(cin >> n >> m >> k))
        return 0;
    long long ans = min(k, min(n, (n + m) / 2));
    cout << ans << "\n";
}
