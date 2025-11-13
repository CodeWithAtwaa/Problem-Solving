#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
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

#define dd                          \
    int n;                          \
    cin >> n;                       \
    vi arr(n * 2);                  \
    for (int i = 0; i < n * 2; i++) \
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

    dd;

    set<int> st; // to remove occr
    int mx = 0;

    // 2 1 1 3 2 3

    for (int x : arr)
    {
        if (st.count(x))
            st.erase(x);
        else
            st.insert(x);

        // 2
        mx = max(mx, (int)st.size());
    }

    cout << mx << endl;
}
