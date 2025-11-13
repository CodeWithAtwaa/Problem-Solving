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

int main()
{

    int n;
    cin >> n;
vector<vector<int>> arr(n, vector<int>(n));

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
    }
}

        ll sum = 0;
    ll sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }

            if (j == n - i - 1)
            {
                sum2 += arr[i][j];
            }
        }
    }

    cout << abs(sum - sum2) << endl;
}
