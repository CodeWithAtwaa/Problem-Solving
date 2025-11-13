#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long

using namespace std;

void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int mx = max(a, b);
    int mn = min(a, b);

    if (mx == 3 && mn == 1)
    {
        cout << 2 << endl;
    }
    else if (mx == 2 && mn == 1)
    {
        cout << 3 << endl;
    }
    else if (mx == 3 && mn == 2)
    {
        cout << 1 << endl;
    }
}
