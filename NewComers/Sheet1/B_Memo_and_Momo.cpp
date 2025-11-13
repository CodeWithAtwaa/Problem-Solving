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

    long long a, b, c;
    cin >> a >> b >> c;

    if (a % c == 0 && b % c == 0)
    {
        cout << "Both\n";
    }
    else if (a % c == 0 && b % c != 0)
    {
        cout << "Memo\n";
    }
    else if (a % c != 0 && b % c == 0)
    {
        cout << "Momo\n";
    }
    else
    {
        cout << "No One\n";
    }
}