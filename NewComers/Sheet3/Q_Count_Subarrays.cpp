#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
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
        int cnt = 1;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = 0;
        int j = 0;
        int mx;
        while (true)
        {
            if (j == n - 1)
            {
                break;
            }

            if (i == j)
            {
                if (arr[i] < arr[i + 1])
                {
                    cnt++;
                }
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    cnt++;
                }
            }
            i++;
            if (i == n - 1)
            {
                j++;
                i = j;
            }
        }
        cout << cnt << endl;
    }
}