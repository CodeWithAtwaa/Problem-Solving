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
    ll a, b, c;
    cin >> a >> b >> c;
    ll mix = max(a, max(c, b));
    ll man = min(a, min(b, c));

    cout<< man << " " << mix <<endl;
}