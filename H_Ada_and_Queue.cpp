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

    int n;
    cin >> n;
    deque<int> q;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "back")
        {
            if (!q.empty())
            {
                cout << q.back() << endl;
                q.pop_back();
            }
            else
            {
                cout << "No job for Ada?";
                ln;
            }
        }
        else if (s == "front")
        {
            if (!q.empty())
            {
                cout << q.front();
                q.pop_front();
                ln;
            }
            else
            {
                cout << "No job for Ada?";
                ln;
            }
        }else if(s == "reverse") {
            reverse(q.begin() , q.end());
        }else if(s == "push_back") {
            int n ;cin >> n;
            q.push_back(n);
        }else if(s == "toFront") {
            int n ;cin >> n;
            q.push_front(n);
        }
    }
}
