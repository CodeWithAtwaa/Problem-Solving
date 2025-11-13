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
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < 2; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2])
        {
            cout << "TRIANGLE" << endl;
            ;
            return 0;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        if (arr[i] + arr[i + 1] == arr[i + 2])
        {
            cout << "SEGMENT" << endl;
            ;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
