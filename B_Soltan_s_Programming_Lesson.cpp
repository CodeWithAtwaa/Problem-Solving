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
    string s;
    cin >> s;
    // int cnt = 0;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
        {
            // cnt++;
            temp.push_back(s[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << '.' << temp[i];
    }
}
