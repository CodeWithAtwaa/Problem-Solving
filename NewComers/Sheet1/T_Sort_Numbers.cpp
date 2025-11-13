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
    int a, b, c;
    cin >> a >> b >> c;
    int mix = max(a, max(b, c));
    int mmnn = min(a, min(b, c));
    int mid = (a + b + c) - (mix + mmnn);
    cout << mmnn << endl;
    cout << mid << endl;
    cout << mix << endl;
    cout<<endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}