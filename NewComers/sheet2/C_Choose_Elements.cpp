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

    ll a, k;
    cin >> a >> k;
    vector<ll> arr(a);
    for (ll i = 0; i < a; i++)
        cin >> arr[i];
    // 5 3 12 1
    // 1 3 5 12
    sort(arr.rbegin(), arr.rend());
    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }

    if (sum <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum << endl;
    }
}
