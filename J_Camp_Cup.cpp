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
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ld long double
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

    int N; 
    cin >> N;

    map<string, ll> totalPoints;

    while (N--) {
        int M;
        cin >> M;
        vector<string> names(M);
        rep(i,M)
            cin >> names[i];

        ld points = 1000;
        rep(i,M) {
            ll rounded = (ll)(round(points));
            totalPoints[names[i]] += rounded;
            points *= 0.9;
        }
    }

    vector<pair<string, ll>> trainees(all(totalPoints));

    sort(all(trainees), [](auto &a, auto &b) {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    cout << trainees[0].first << "\n";

    for (auto &t : trainees)
        cout << t.first << " " << t.second << "\n";
}
