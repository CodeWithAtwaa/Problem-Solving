#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
            break;
        else
        {
            int mx = max(n, m);
            int mn = min(n, m);
            int sum = 0;
            for (int i = mn; i <= mx; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
    }
}