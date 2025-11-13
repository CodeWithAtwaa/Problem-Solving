#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s(n, '*');
        int l = i, r = n - 1 - i;
        if (l == r)
            s[l] = 'X';
        else
        {
            s[l] = '\\';
            s[r] = '/';
        }
        cout << s << '\n';
    }
}