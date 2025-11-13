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

    char ch;
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        if (ch == 122)
        {
            cout << char(97);
        }
        else
        {
            cout << char(ch + 1) << endl;
        }
    }
}