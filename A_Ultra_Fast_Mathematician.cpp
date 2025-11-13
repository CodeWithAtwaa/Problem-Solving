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

string XOR(string s, string s1)
{
    // 1110001
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        int a = s[i] - '0';
        int b = s1[i] - '0';
        int res = a ^ b;

        temp += (res + '0');
    }

    return temp;
}

string XOROperator(const string &s1, const string &s2)
{
    string temp = "";
    for (int i = 0; i < max(s1.size(), s2.size()); i++)
    {
        int num1 = s1[i] - '0';
        int num2 = s2[i] - '0';

        int res = num1 ^ num2;
        temp += (res + '0');
    }
    return temp;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    cout << XOROperator(a , b) << endl;
}
