#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll mn = LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll sum = arr[i] + arr[j] + (j - i);
                if (sum < mn)
                {
                    mn = sum;
                }
            }
        }

        cout << mn << endl;
        delete[] arr;
    }
    return 0;
}
