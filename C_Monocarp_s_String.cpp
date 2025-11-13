#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include<unordered_map>
#include<unordered_>
#include <algorithm>
#define ull unsigned long long
#define ll long long

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

//  this is parttern yasta
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalA = count(s.begin(), s.end(), 'a');
        int totalB = n - totalA;
        int diff = totalA - totalB;

        if (diff == 0) {
            cout << 0 << "\n"; // already equal
            continue;
        }

        // prefix sum: a -> +1, b -> -1
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + (s[i - 1] == 'a' ? 1 : -1);
        }

        unordered_map<int, int> first_occurrence;
        int ans = INT_MAX;

        for (int i = 0; i <= n; i++) {
            if (!first_occurrence.count(pref[i]))
                first_occurrence[pref[i]] = i;

            int need = pref[i] - diff;
            if (first_occurrence.count(need)) {
                int len = i - first_occurrence[need];
                ans = min(ans, len);
            }
        }

        if (ans == INT_MAX || ans == n)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
}


