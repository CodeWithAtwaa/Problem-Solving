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

int main()
{

    ios;

    int q;
    cin >> q;
    set<int> st;
    while (q--)
    {
        int n;
        string s;
        cin >> s;

        if (s == "insert")
        {
            cin >> n;
            st.insert(n);
        }
        else if (s == "find")
        {
            cin >> n;
            if (st.find(n) != st.end())
            {
                cout << "found";
                ln;
            }
            else
            {
                cout << "not found";
                ln;
            }
        }
        else if (s == "lower_bound")
        {
            cin >> n;
            auto it = st.lower_bound(n);
            if (it != st.end())
            {
                cout << *it;
                ln;
            }
            else
            {
                cout << -1;
                ln;
            }
        }
        else if (s == "upper_bound")
        {

            cin >> n;
            auto it = st.upper_bound(n);
            if (it != st.end())
            {
                cout << *it;
                ln;
            }
            else
            {
                cout << -1;
                ln;
            }
        }
    }
}
