#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 10)
        {
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}