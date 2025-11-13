#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long

using namespace std;

void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i < sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll fib(ll n)
{
    ll a = 0;
    ll b = 1;
    if (n == 1)
        return a;
    if (n == 2)
        return b ;
    ll temp = 0;
    for (ll i = 3; i <= n; i++)
    {
        temp = b + a;
        a = b;
        b = temp;
    }

    return temp;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = fib(n);
        if (isPrime(x))
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not prime" << endl;
        }
    }
}
