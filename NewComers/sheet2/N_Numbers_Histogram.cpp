#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    int n;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cout << ch;
        }
        cout << endl;
    }
}