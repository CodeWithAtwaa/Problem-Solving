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
    int n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> arr1(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());
    bool found = true;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != arr1[i])
        {
            found = false;
            break;
        }
    }

    if (found)
    {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
}