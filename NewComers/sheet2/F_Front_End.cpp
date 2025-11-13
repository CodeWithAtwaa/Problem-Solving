#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> temp;
    temp.reserve(n);

    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (l == r) {
            temp.push_back(arr[l]);
        } else {
            temp.push_back(arr[l]);
            temp.push_back(arr[r]);
        }
        l++;
        r--;
    }

    for (ll i = 0; i < n; i++)
    {
        if (i)
            cout << " ";
        cout << temp[i];
    }
}
