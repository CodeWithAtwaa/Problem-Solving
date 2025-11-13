#include <iostream>
#include <string>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum) << endl;
}