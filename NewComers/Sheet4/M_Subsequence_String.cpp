#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string a = "hello";
    // ahhellllloou
    int size = s.size();

    int i = 0; // a
    int z = 0; // s
    bool found = false;
    while (true)
    {
        if (i == size)
        {
            break;
        }

        if (z == a.size())
        {
            break;
        }
        if (s[i] == a[z])
        {
            z++;
        }
        i++;

        if (z == 5)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
}
