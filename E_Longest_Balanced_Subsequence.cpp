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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        vi v;
        map<ll, ll> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (auto x : a)
        {
            freq[x]++;
        }
        for (auto ch : freq)
        {
            v.push_back(ch.second);
        }

        //  funck error  ch > i
        ll res = 0;
        for (int i = 1; i <= *max_element(v.begin(), v.end()); i++)
        {
            ll cnt = 0;
            for (auto ch : v)
            {
                if (ch >= i)
                {
                    cnt++;
                }
            }
            res = max(res, cnt * i);
        }
        cout << res << ln;
    }
}
