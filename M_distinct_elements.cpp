#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <set>
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

      int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    //remove
    a.erase(unique(a.begin(), a.end()), a.end());

    while (q--) {
        int x;
        cin >> x;

        int less_cnt = lower_bound(a.begin(), a.end(), x) - a.begin();
        int greater_cnt = a.end() - upper_bound(a.begin(), a.end(), x);

        cout << less_cnt << " " << greater_cnt << "\n";
    }
}
