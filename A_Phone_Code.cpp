#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long

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

string perfix(string a, string b)
{
    string temp = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            temp += a[i];
        }
        else
        {
            break;
        }
    }

    return temp;
}

int main()
{

    // cout<<perfix("77012345678999999999" , "77012345678901234567");
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    string s = arr[0];
    for (int i = 1; i < n; i++)
    {
        s = perfix(s, arr[i]);
        // int size = s.size();
        if (s == "")
        {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << s.size();
}
