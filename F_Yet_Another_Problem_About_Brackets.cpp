#include <bits/stdc++.h>
#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
#define vi vector<ll>
#define ln endl

// للحب أهل ولسنا أهله أبدا  *****  نحن الظلام الزي ما زاره قمر
using namespace std;

int main()
{
    fastIO;
    ll t;
    cin >> t;
    stack<char> st;
    while (t--)
    {
        string s;
        cin >> s;
        st.push(s[0]);
        bool start = false;

        for (int i = 1; i < s.size(); i++)
        {
            // ( ( ( (
            if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }

            if (st.empty() && i != s.size() - 1)
            {
                start = true;
                break;
            }
        }

        if (start)
        {
            cout << "YES" << ln;
        }
        else
        {
            cout << "NO" << ln;
        }
    }
}
