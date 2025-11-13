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
    string s;
    cin >> s;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        // 49 -4
        // 50
        sum += (s[i] - '0');
    }
    cout << sum << endl;
}