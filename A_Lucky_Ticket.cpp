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

int sum(string s, int n)
{
    int ss = 0;
    for (int i = 0; i < n / 2; i++)
    {
        ss += (s[i] - '0');
    }

    return ss;
}
int sum2(string s, int n)
{
    int ss = 0;
    for (int i = n / 2; i < n; i++)
    {
        ss += (s[i] - '0');
    }

    return ss;
}

bool check(string s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') != 4 && (s[i] - '0') != 7)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    // cout << sum("4774", 4) << endl;
    // cout << sum2("4774", 4) << endl;

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (check(s, n) && sum(s, n) == sum2(s, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
