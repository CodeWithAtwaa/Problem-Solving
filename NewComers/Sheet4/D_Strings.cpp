#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, b;
    cin >> s >> b;
    int si = s.size();
    int bi = b.size();

    cout << si << " " << bi << endl;
    cout << s + b << endl;

    char sh = s[0];
    char bh = b[0];
    cout << bh;
    for (int i = 1; i < si; i++)
    {
        cout << s[i];
    }
    cout << " ";
    cout << sh;
    for (int i = 1; i < bi; i++)
    {
        cout << b[i];
    }

}
