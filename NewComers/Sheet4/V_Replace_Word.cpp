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

 string s;
    cin >> s;

    string target = "EGYPT";
    string result;

    for (int i = 0; i < (int)s.size();) {
        if (s.substr(i, target.size()) == target) {
            result += ' ';   
            i += target.size();
        } else {
            result += s[i];
            i++;
        }
    }

    cout << result << "\n";
}
