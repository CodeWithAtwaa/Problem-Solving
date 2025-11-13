#include <iostream>
using namespace std;

void swap(long long &a, long long &b)
{
    long long s = a;
    a = b;
    b = s;
    cout << a << " " << b << endl;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    swap(a,b);
}