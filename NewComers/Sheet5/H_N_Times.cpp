#include <iostream>
using namespace std;

void print(int n, char ch)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (found)
        {
            cout << " ";
        }
        found = true;
        cout << ch;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        char ch;
        cin >> x >> ch;
        print(x, ch);
        cout << endl;
    }
}