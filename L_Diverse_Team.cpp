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
#define pr pair<int, int>

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

#define ln endl
#define no cout << "NO";
#define yes cout << "YES";

#define dd                      \
    int n;                      \
    cin >> n;                   \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

#define nk                      \
    int n, k;                   \
    cin >> n >> k;              \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

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
    // nk;

    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vi index;
    vector<bool> show(101, false);

    for (int i = 0; i < n; i++)
    {
        if (!show[arr[i]])
        {
            show[arr[i]] = true;
            index.push_back(i + 1);
        }
    }

    if (index.size() >= k)
    {
        yes;
        cout << endl;
        for (int i = 0; i < k; i++)
        {
            if (i)
                cout << " ";
            cout << index[i];
        }
    }
    else
    {
        no;
    }
}
