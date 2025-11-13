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
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }

        int i = 0;
        int j = 0;
        int mx;
        while (true)
        {
            if (j == n - 1)
                break;
            if (i == j)
            {
                mx = max(arr[i], arr[i + 1]);
            }
            else
            {
                mx = max(mx, arr[i + 1]);
            }
            cout << mx << " ";
            i++;
            if (i ==  n -1 )
            {
                j++;
                i = j;
            }
        }
        cout << endl;
    }
}