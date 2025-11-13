#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO";
#define yes cout << "YES";

#define dd                      \
    int n;                      \
    cin >> n;                   \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

void ATWAA()
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

    ios;
    ios;

    tc
    {
        int n, h;
        cin >> n >> h;
        vi temp(n + 5, 0);

        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            temp[l] += 1;
            if (r + 1 <= n)
                temp[r + 1] -= 1;
        }

        vi Zeros(n + 5, 0);
        Zeros[1] = temp[1];
        for (int i = 2; i <= n; i++)
            Zeros[i] = Zeros[i - 1] + temp[i];

        ll sum = 0, MX = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += Zeros[i];
            if (i > h)
                sum -= Zeros[i - h];
            if (i >= h)
                MX = max(MX, sum);
        }

        ll res = 1LL * h * n - MX;
        cout << res << "\n";
    }
}
