#include <iostream>
#include <string>
#include <set>
#include <utility>
#include <vector>
#include <numeric>
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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> diff(n + 1, 0);

    while (q--)
    {
        int L, R;
        long long val;
        cin >> L >> R >> val;
        --L;
        --R;
        diff[L] += val;
        if (R + 1 < n)
            diff[R + 1] -= val;
    }

    partial_sum(diff.begin(), diff.end(), diff.begin());

    for (int i = 0; i < n; i++)
        a[i] += diff[i];

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
