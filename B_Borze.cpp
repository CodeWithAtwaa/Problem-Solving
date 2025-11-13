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

    string temp = "";
    for (int i = 0; i < a.size(); i++)
    {
         if (a[i] == '.')
        {
            temp.push_back('0');
        }
        else if (a[i] == '-' && i + 1 < a.size())
        {
            if (a[i + 1] == '.')
            {
                temp.push_back('1');
                i++; 
            }
            else if (a[i + 1] == '-')
            {
                temp.push_back('2');
                i++; 
            }
        }
    }

    cout << temp;
}
