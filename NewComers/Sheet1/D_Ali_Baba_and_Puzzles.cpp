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

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long res = a + b * c;
    long long res1 = a + b - c;
    long long res2 = a - b * c;
    long long res3 = a - b + c;
    long long res4 = a * b + c;
    long long res5 = a * b - c;

    if (res == d || res1 == d || res2 == d || res4 == d || res5 == d || res3 == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}