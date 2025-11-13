#include <iostream>
using namespace std;
int main()
{
    string s;

    while (cin >> s)
    {
        if (s == "1999")
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
            // continue;
        }
    }
}