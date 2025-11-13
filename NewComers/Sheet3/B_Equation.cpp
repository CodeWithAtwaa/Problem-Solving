#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include<iomanip>
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
    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(10);

    if (A == 0 && B == 0 && C == 0)
    {
        cout << -1 << "\n";
        return 0;
    }

    if (A == 0 && B == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    if (A == 0)
    {
        double x = -C / B;
        cout << 1 << "\n"
             << x << "\n";
        return 0;
    }

    double D = B * B - 4 * A * C;
    if (D < -1e-12)
    {
        cout << 0 << "\n";
    }
    else if (fabs(D) <= 1e-12)
    {
        double x = -B / (2 * A);
        cout << 1 << "\n"
             << x << "\n";
    }
    else
    {
        double sqrtD = sqrt(D);
        double x1 = (-B - sqrtD) / (2 * A);
        double x2 = (-B + sqrtD) / (2 * A);
        if (x1 > x2)
            swap(x1, x2);
        cout << 2 << "\n"
             << x1 << "\n"
             << x2 << "\n";
    }
}
