#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long

using namespace std;
void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****          |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *         |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******         |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *         |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *         |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}


bool isLucky(long long x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    long long count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') count++;
    }

    if (isLucky(count))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
