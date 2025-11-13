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
#include <deque>
#include <queue>

#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define all(vec) vec.begin(), vec.end()

#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln cout << endl;
#define no cout << "NO\n";
#define yes cout << "YES\n";

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

// g++ testing.c++ -o testing && testing

// must be sorted asc (1 2 3)
// Lower_bound() => first element greater than or equal elemnt(index) >= x
// Upper() => first element greater  elemnt(index) > x
int main()
{

    ios;
    tc
    {
        dd;

        int even = -1;
        rep(i, n)
        {
            if (arr[i] % 2 == 0)
            {
                even = i;
                break;
            }
        }

        if(even == -1) {
            cout << -1 ;
            ln;
        }else{
            cout << arr[even] << " "<< arr.back();
            ln;
        }
    }
}
