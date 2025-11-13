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

// ateasdjlak
// 0 0 
// 10  2 * 1

ll count(int n) {
    ll count = 0;
    while (n > 9) {
        ll sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        count++;
    } 
    return count;
}

int main() {
    ll n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}


