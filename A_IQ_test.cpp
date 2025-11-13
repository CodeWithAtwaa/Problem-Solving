#include <iostream>
#include <string>
#include <vector>
#include <set>
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
            evenIndex = i + 1;
        }
        else
        {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    if (evenCount == 1)
    {
        cout << evenIndex << "\n";
    }
    else
    {
        cout << oddIndex << "\n";
    }
}
