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
    char ch;
    cin >> ch;
    if (isupper(ch))
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL\n";
    }
    else if (islower(ch))
    {
        cout << "ALPHA\n";
        cout << "IS SMALL\n";
    }
    else if (isdigit(ch))
    {
        cout << "IS DIGIT\n";
    }
}