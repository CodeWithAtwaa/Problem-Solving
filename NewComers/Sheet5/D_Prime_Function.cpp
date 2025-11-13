#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool IsPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (IsPrime(n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}