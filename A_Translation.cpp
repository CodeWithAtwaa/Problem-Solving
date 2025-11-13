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

int main()
{
    string s, a;
    cin >> s >> a;
    bool found = true;
    int mx = max(s.size(), a.size());
    int mn = min(s.size(), a.size());
    for (int i = 0; i < mx; i++)
    {
        if (s[i] != a[mx - 1 - i])
        {
            found = false;
            break;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO\n";
}
