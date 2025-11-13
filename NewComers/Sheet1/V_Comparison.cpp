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
    int a, b;
    char ch;
    cin >> a >> ch >> b;

    switch (ch)
    {
    case '>':
        if (a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;

    case '<':
        if (a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;

    case '=':
        if (a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;
    }
}