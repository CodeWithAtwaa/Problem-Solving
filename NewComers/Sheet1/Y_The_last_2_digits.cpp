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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100) < 10)
    {
        cout << "0" << (((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100);
    }
    else
    {

        cout << (((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100) << endl;
    }
}
