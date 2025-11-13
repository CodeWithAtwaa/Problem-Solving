#include <bits/stdc++.h>
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define vi vector<ll>
#define ln endl
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        vi cap, sm;
        string s;
        cin >> s;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!sm.empty())
                {
                    temp[sm.back()] = '1';
                    sm.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                if (!cap.empty())
                {
                    temp[cap.back()] = '1';
                    cap.pop_back();
                }
            }
            else
            {
                temp.push_back(s[i]);
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sm.push_back(temp.size() - 1);
                }
                else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    cap.push_back(temp.size() - 1);
                }
            }
        }
        string pre = "";
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] != '1')
            {
                pre += temp[i];
            }
        }
        cout << pre << ln;
    }
}
