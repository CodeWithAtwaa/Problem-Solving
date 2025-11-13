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

const int MOD = 1000000;
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
    // dd;

    int n;
    cin >> n;

    vi arr(n);
    ll sum = 0;
    vi perf(1e6 + 5, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
        perf[arr[i]]++;
    }
    vi res(n);
    int j =0 ;
    for (int i = 0; i < n; ++i)
    {
        sum -= arr[i];
        perf[arr[i]]--;

        if (sum % 2 == 0 && sum / 2 <= 1e6 && perf[sum / 2] > 0)
        {
            res[j] = i + 1;
            j++;
        }

        sum += arr[i];
        perf[arr[i]]++;
    }
    cout << j << endl;
    
    for (int i = 0; i < j; ++i)
    {
        if(i) cout << " ";
        cout << res[i];
    }
    ln;
}
