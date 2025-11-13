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

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

vector<int> lucky;

void generateLucky(long long num) {
    if (num > 1000) return;
    if (num != 0) lucky.push_back(num);
    generateLucky(num * 10 + 4);
    generateLucky(num * 10 + 7);
}

int main() {
    int n;
    cin >> n;

    generateLucky(0);

    for (int x : lucky) {
        if (n % x == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}