#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
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

int mnn(string x)
{
    int mn = INT_MAX;
    for (int i = 0; i < x.size(); i++)
    {
        if ((x[i] - '0')  < mn)
        {
            mn = (x[i] - '0');
        }
    }
    return mn;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << mnn(s) << endl;
    }


    // php artisan serve</algorithm>
}
