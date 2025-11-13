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

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define endl "\n"

#define dd                      \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    int c = 0;
    getline(cin, s1);
    getline(cin, s2);
    // int n = s2.size();
    // for (int i = 0; i < s2.size(); i++)
    // {
    //     if (s2[i] == 32)
    //     {
    //         n--;
    //         continue;
    //     }

    //     for (int j = 0; j < s1.size(); j++)
    //     {
    //         if (s2[i] == s1[j])
    //         {
    //             c++;
    //             s1[j] = '0';
    //             break;
    //         }
    //     }
    // }

    // if (c == n)
    //     cout << "YES";
    // else
    //     cout << "NO";

    map<int, int> mp1, mp2;
    for (auto x : s1)
    {
        if (x != ' ')
            mp1[x]++;
    }
    for (auto x : s2)
    {
        if (x != ' ')
            mp2[x]++;
    }
    for (auto x : mp2)
    {
        if (mp1[x.first] < x.second)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
