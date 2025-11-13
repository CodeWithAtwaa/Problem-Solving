#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int isPalindrome(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{

    int n;
    cin >> n;

    cout << isPalindrome(n) << endl;
    if (n == isPalindrome(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}