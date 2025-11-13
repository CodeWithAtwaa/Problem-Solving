#include <iostream>
#include <string>
#include <vector>
// #include <bits/stdc++.h>
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    int lower = 0;
    int upper = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = toupper(a[i]);
        }
    }
    else if (lower >= upper)
    {
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = tolower(a[i]);
        }
    }

    cout << a << endl;
}
