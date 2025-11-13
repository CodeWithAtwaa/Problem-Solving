#include <iostream>
#include <string>
#include <cmath>
#define ll long long
#define mn INT_MAX
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 1 2 3 4 5 6
    cout << arr[n - 1];
    for (int i = n- 2; i >= 0; i--)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}