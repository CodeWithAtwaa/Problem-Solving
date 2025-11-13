#include <iostream>
#include <iomanip>
#define PI 3.141592653
#define ll long long
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    int res = (a % 10);
    int resq = (b % 10);
    cout << res + resq << endl;

    return 0;
}