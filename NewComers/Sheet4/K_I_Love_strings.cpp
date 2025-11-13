#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        int sizeS = s.size();
        int sizeT = t.size();

        int mx = max(sizeS, sizeT);
        int mn = min(sizeS, sizeT);
        int diff = mx - mn;

        for (int i = 0; i < mn; i++)
        {
            cout << s[i] << t[i];
        }
        
        if (sizeS == mx)
        {
            for (int i = 0; i < diff; i++)
            {
                cout << s[mn + i];
            }
        }
        else
        {
            for (int i = 0; i < diff; i++)
            {
                cout << t[mn + i];
            }
        }
        cout << endl;
    }
}