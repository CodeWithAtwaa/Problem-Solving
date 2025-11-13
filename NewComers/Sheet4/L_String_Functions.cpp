#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        string x;
        cin >> x;
        int l, r;

        if (x == "pop_back")
        {
            s.pop_back();
        }
        else if (x == "front")
        {
            cout << s.front() << endl;
        }
        else if (x == "back")
        {
            cout << s.back() << endl;
        }
        else if (x == "sort")
        {
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (x == "reverse")
        {
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (x == "print")
        {
            cin >> l;
            cout << s[l - 1] << endl;
        }
        else if (x == "substr")
        {
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (x == "push_back")
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
    }
}
