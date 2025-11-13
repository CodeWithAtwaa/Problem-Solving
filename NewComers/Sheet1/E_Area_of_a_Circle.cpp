#include <iostream>
#include <iomanip>
#define PI 3.141592653
#define ll long long
using namespace std;

int main()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(9) << PI * a * a;
    return 0;
}