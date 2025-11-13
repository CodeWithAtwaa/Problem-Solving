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
    double a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "Origem" << endl;
    }
    else if (a > 0 && b <= 90)
    {
        cout << "Q1" << endl;
    }
    else if (a > 90 && b <= 180)
    {
        cout << "Q2" << endl;
    }
    else if (a > 180 && b <= 270)
    {
        cout << "Q3" << endl;
    }
    else if (a > 270 && b <= 360)
    {
        cout << "Q4" << endl;
    }
    else if (a == 0 && b == 90)
    {
        cout << "Eixo Y" << endl;
    }
    else if (a == 180 && b == 90)
    {
        cout << "Eixo X" << endl;
    }
    else if (a == 0 && b == 270)
    {
        cout << "Eixo Y" << endl;
    }
    else if (a == 360 && b == 0)
    {
        cout << "Eixo Y" << endl;
    }
}