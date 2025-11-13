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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        char s1 = s[0];
        char s2 = s[1];
        char s3 = s[2];
        char s4 = s[3];

        string f = "";
        string sec = "";

        f.push_back(s[0]);
        f.push_back(s[1]);

        sec.push_back(s[2]);
        sec.push_back(s[3]);
        // 10 01   10 1
        cout << f << " " << sec << endl;

        int first = stoi(f);
        int second = stoi(sec);

        long long res = first + second;
        if (pow(res, 2) == stoi(s))
        {
            cout << first << " " << second << endl;
        }
        // else
        // {
        //     cout << -1 << endl;
        // }
    }
}
