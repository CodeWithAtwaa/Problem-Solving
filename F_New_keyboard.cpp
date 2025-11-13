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
    string s;

    while (getline(cin, s))
    {
        deque<string> dq;
        bool start = 0;
        string temp = "";

        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == '[')
            {
                if (start)
                    dq.push_front(temp);
                else
                    dq.push_back(temp);

                temp = "";
                start = 1;
            }
            else if (s[i] == ']')
            {
                if (start)
                    dq.push_front(temp);
                else
                    dq.push_back(temp);

                temp = "";
                start = 0;
            }
            else
            {
                temp += s[i];
            }
        }

        if (start)
            dq.push_front(temp);
        else
            dq.push_back(temp);

        for (auto &part : dq)
            cout << part;
        ln;
    }
}
