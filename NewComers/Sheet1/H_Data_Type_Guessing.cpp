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

 long long n, k, a;
    cin >> n >> k >> a;

    __int128 prod = (__int128)n * k; 

    if (prod % a != 0) {
        cout << "double\n";
    } else {
        long long val = prod / a;
        if (val >= INT_MIN && val <= INT_MAX) {
            cout << "int\n";
        } else {
            cout << "long long\n";
        }
    }
}
