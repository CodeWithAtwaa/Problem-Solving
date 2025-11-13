#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
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
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int bestY = 1;
        int bestValue = 1 + gcd(x, 1);

        for (int y = 2; y < x; y++) {
            int val = y + gcd(x, y);
            if (val > bestValue) {
                bestValue = val;
                bestY = y;
            }
        }
        cout << bestY << "\n";
    }

}


