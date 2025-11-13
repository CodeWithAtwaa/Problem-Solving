#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define ll long long
#define mn INT_MAX
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mmn = i; 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mmn])
            {
                mmn = j;
            }
        }
        swap(arr[i], arr[mmn]);
    }

    cout << arr[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}
