#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int mn = min(x, y);
        int mx = max(x, y);
        long long sum = 0;
        for (int i = mn + 1; i < mx; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
}