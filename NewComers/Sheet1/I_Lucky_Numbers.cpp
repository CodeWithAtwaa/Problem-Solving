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

    int a;
    cin >> a;

    int first = a / 10;
    int second = a % 10;

    int maxx = max(first, second);
    int mixx = min(first, second);

    if (mixx == 0)
    {
        cout << "YES";
    }
    else if (maxx % mixx == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
