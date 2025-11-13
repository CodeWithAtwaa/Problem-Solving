#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mn = min(a, b);

    if (mx % mn == 0)
    {
        cout << "Multiples\n";
    }
    else
    {
        cout << "No Multiples\n";
    }
}