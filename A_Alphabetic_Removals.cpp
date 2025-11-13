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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // cccaabababaccbc
    //
    vi count(27, 0);
    for (int i = 0; i < 26; i++)
    {
        for (char ch : s)
        {
            if (ch == 'a' + i)
            {
                if (k > 0)
                {
                    // 2 => 1
                    count[i]++;
                    k--;
                }


                
                if (k == 0)
                    break;
            }
        }



        if (k == 0)
            break;
    }

    string temp = "";
    for (char ch : s)
    {
        int i = ch - 'a';

        if (count[i] > 0)
        {
            count[i]--;
        }
        else
        {
            temp += ch;
        }
    }

    cout << temp;
    ln;
}
