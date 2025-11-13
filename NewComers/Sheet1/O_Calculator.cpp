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
    ll a, b;
    char ch;
    cin >> a >> ch >> b;
    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    }
}