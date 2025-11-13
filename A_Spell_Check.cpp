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

    int t;
    if (!(cin >> t))
        return 0;
    const string target = "Timur";
    string sorted_target = target;
    sort(sorted_target.begin(), sorted_target.end());

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }
        string ss = s;
        sort(ss.begin(), ss.end());
        if (ss == sorted_target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
