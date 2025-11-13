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

    cout << "|||      *****     *********  *     *     *****     *****          |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *         |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******         |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *         |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *         |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> before(n), after(n);
    for (int i = 0; i < n; i++)
    {
        cin >> before[i] >> after[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (before[i] != after[i])
        {
            cout << "rated\n";
            return 0;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (before[i] < before[i + 1])
        {
            cout << "unrated\n";
            return 0;
        }
    }

    cout << "maybe\n";
}
