#include <iostream>
#include <string>
using namespace std;

bool OddOrEven(long long n)
{
    return n % 2 != 0;
}

string Binary(long long n)
{
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    return binary;
}

bool palindrome(string b)
{
    // abcd = 4
    int size = b.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (b[i] != b[size - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    long long n;
    cin >> n;
    if (OddOrEven(n) && palindrome(Binary(n)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}