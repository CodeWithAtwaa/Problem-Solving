#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    if (n == 1)
        cout << a << endl;
    if (n == 2)
        cout << b << endl;
    ll temp = 0;
    for (int i = 3; i <= n; i++)
    {
        temp = b + a;
        a = b;
        b = temp;
    }
    cout << temp << endl;
}