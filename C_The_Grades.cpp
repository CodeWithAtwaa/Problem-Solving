#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
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

struct STD
{
    string s;
    int a, b, total = 0, c, d;
};

bool cmp(const STD &a, const STD &b)
{
    if (abs(a.total - b.total) > 10)
        return a.total > b.total;
    return a.s < b.s;
}

int main()
{

    ios;

    int q;
    cin >> q;
    vector<STD> arr(q);
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i].s >> arr[i].a >> arr[i].b >> arr[i].c >> arr[i].d;
        arr[i].total += arr[i].a + arr[i].b + arr[i].c + arr[i].d;
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < q; i++)
    {
        cout << arr[i].s << " "
             << arr[i].total << " "
             << arr[i].a << " "
             << arr[i].b << " "
             << arr[i].c << " "
             << arr[i].d << " "
             << "\n";
    }
}
