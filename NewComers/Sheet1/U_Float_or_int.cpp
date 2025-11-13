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
    double n;
    cin >> n;
    if (n == (int)n)
    {
        cout << "int " << (int)n << endl;
    }
    else
    {
        cout << "float " << (int)n << " " << n - (int)n << endl;
    }
}