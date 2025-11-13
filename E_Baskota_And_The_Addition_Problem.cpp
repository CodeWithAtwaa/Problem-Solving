#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll  long long

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
    string s;
    cin >> s;
    int size = s.size();
    string temp = "";

    for (int i = 0; i < size; i++)
    {
        if ((s[i] - '0') >= 1 && (s[i] - '0' <= 3))
        {
            temp += s[i];
        }
    }
    sort(temp.begin(), temp.end());

    bool found = false;
    for (int i = 0; i < temp.size(); i++)
    {
        if (found)
        {
            cout << '+';
        }
        found = true;
        cout << temp[i];
    }
}
