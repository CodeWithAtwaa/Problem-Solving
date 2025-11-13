#include <iostream>
#include <string>
#include <utility>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
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
// 1 2 3 4 1 2 3 4 100000 99999
//                     1    1
//                     2    1

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vi l(n + 5);
    l[n] = 0;
    set<int> show;
    // n - 1 = 9
    for (int i = n - 1; i >= 0; i--)
    {
        show.insert(arr[i]);
        l[i] = show.size();
    }

    while (m--)
    {
        int x;
        cin >> x;
        cout << l[x - 1] << endl;
    }
}
