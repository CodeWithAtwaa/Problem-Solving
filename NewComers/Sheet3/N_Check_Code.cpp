#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    int size = s.size();
    bool flag = true;
    // 1 2 3 4 5 6 7 8 9

    if (size != a + b + 1)
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i == a)
        {
            if (s[i] != '-')
            {
                flag = false;
                break;
            }
        }else {
            if (s[i] < '0' || s[i] > '9') {
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}