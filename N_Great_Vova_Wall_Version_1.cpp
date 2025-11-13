#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include  <unordered_map>
#include  <unordered_set>
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
    int n;
   cin >> n;
   stack<int> s;
    for (int i = 0; i < n; ++i) {
        int a;
       cin >> a;
        int parity = a % 2;
        if (!s.empty() && s.top() == parity) {
            s.pop();
        } else {
            s.push(parity);
        }
    }
    if (s.size() <= 1) {
       cout << "YES" <<endl;
    } else {
       cout << "NO" <<endl;
    }
    return 0;
}

