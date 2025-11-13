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
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int A = 0, B = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                A++;
            else
                B++;
        }

        if (A > B)
            cout << 'A'<<endl;
        else
        {
            cout << 'B' << endl;
        }
    }
}
