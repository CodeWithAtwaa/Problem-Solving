#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <stack>
#include <deque>
#include <queue>
#include <iterator>
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
    //  to read  n , arr
    // dd

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        string type;
        int x;
        cin >> type >> x;

        if (type == "next_permutation")
        {
            for (int i = 0; i < x; i++)
            {
                if (!next_permutation(s.begin(), s.end()))
                {
                    sort(s.begin(), s.end());
                }
            }
        }
        else if (type == "prev_permutation")
        {
            for (int i = 0; i < x; i++)
            {
                if (!prev_permutation(s.begin(), s.end()))
                {
                    sort(s.begin(), s.end(), greater<char>());
                }
            }
        }

        cout << s << "\n";
    }
}
