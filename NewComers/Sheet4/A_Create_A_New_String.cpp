#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, a;
    cin >> s >> a;
    int sizeA = a.length();
    int sizeS = s.length();

    cout << sizeS << " " << sizeA << endl;
    cout << s << " " << a << endl;
}