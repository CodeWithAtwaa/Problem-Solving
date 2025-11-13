#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
#define ull unsigned long long
#define ll long long
#define io                       \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
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
    io;
int t;
    cin >> t;

    vector<int> prefix = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};

    while (t--) {
        long long n;
        cin >> n;
        long long ans = (n / 15) * 3 + prefix[n % 15];
        cout << ans << "\n";
    }
}
