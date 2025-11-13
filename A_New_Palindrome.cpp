#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#define ull unsigned long long

using namespace std;
void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****          |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *         |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******         |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *         |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *         |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

int main()
{

    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        int freq[26] = {0};
        for (char c : s) freq[c - 'a']++;
        int cnt_half = 0;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] / 2 > 0) cnt_half++;
        }
        if (cnt_half >= 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
