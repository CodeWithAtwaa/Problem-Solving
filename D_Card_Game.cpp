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

    string m, a, r;
    cin >> m >> a >> r;

    queue<char> qm, qa, qr;

    for (char c : m)
    {
        qm.push(c);
    }
    for (char c : a)
    {
        qa.push(c);
    }
    for (char c : r)
    {
        qr.push(c);
    }

    char start = 'm';
    while (true)
    {
        // mrm 
        if (start == 'm')
        {
            if (qm.empty())
            {
                cout << "M";
                ln;
                break;
            }
            // mrm
            //  mr
            start = qm.front();
            qm.pop();
        }else if(start == 'a') {
            if(qa.empty()) {
                cout <<"A";ln;
                break;
            }
            start = qa.front();
            qa.pop();
        }else {
            if(qr.empty() ) {
                cout << "R";
                ln;
                break;
            }
            start = qr.front();
            qr.pop();
        }
    }
}
