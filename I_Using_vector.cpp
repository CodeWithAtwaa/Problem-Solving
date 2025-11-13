#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <cmath>
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    while (q--)
    {
        string s;
        cin >> s;
        if (s == "pop_back")
        {
            if (!arr.empty())
                arr.pop_back();
        }
        else if (s == "front")
        {
            if (!arr.empty())
                cout << arr.front() << "\n";
        }
        else if (s == "back")
        {
            if (!arr.empty())
                cout << arr.back() << "\n";
        }
        else if (s == "sort")
        {
            int a, b;
            cin >> a >> b;
            --a; --b;
            sort(arr.begin() + a, arr.begin() + b + 1);
        }
        else if (s == "reverse")
        {
            int a, b;
            cin >> a >> b;
            --a; --b;
            reverse(arr.begin() + a, arr.begin() + b + 1);
        }
        else if (s == "print")
        {
            int a;
            cin >> a;
            --a;
            cout << arr[a] << "\n";
        }
        else if (s == "push_back")
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
    }
}
