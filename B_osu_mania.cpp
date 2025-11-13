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
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        vector<int> result;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (grid[i][j] == '#')
                {
                    result.push_back(j + 1); 
                    break;
                }
            }
        }

        // print result
        for (int x : result)
            cout << x << " ";
        cout << "\n";
    }
}
