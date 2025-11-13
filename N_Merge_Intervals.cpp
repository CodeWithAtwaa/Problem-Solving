#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define endl "\n"

#define dd                      \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

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

    int n, c = 0;
    cin >> n;
    pair<int, int> ss[n];
    for (int i = 0; i < n; i++)
        cin >> ss[i].first >> ss[i].second;
    sort(ss, ss + n);
    for (int i = 1; i < n; i++)
    {
        if (ss[c].second >= ss[i].first)
        {
            ss[c].second = max(ss[c].second, ss[i].second);
            ss[i].first = 0;
            ss[i].second = 0;
            continue;
        }
        c = i;
    }
    // cout<<"=========================";
    for (int i = 0; i < n; i++)
    {
        if (ss[i].first != 0)
            cout << ss[i].first << " " << ss[i].second << endl;
    }
    return 0;
}
