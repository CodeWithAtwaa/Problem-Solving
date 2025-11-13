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
    ll day;
    cin >> day;
    cout << day / 365 << " years" << endl;
    cout << (day % 365) / 30 << " months" << endl;
    cout << (day % 365) % 30 << " days" << endl;
}