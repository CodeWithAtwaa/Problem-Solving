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
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back")
        {
            if (!s.empty())
                s.pop_back();
        }
        else if (cmd == "front")
        {
            cout << s.front() << '\n';
        }
        else if (cmd == "back")
        {
            cout << s.back() << '\n';
        }
        else if (cmd == "sort")
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;
            if (l > r)
                swap(l, r);
            l = max(0, l);
            r = min((int)s.size() - 1, r);
            if (l <= r)
                sort(s.begin() + l, s.begin() + r + 1);
        }
        else if (cmd == "reverse")
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;
            if (l > r)
                swap(l, r);
            l = max(0, l);
            r = min((int)s.size() - 1, r);
            if (l <= r)
                reverse(s.begin() + l, s.begin() + r + 1);
        }
        else if (cmd == "print")
        {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= (int)s.size())
                cout << s[pos - 1] << '\n';
        }
        else if (cmd == "substr")
        {
            int l, r;
            cin >> l >> r;
            --l;
            --r;
            if (l > r)
                swap(l, r);
            l = max(0, l);
            r = min((int)s.size() - 1, r);
            if (l <= r)
                cout << s.substr(l, r - l + 1) << '\n';
        }
        else if (cmd == "push_back")
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
    }
}
