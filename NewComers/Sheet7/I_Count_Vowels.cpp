#include <iostream>
#include <string>
using namespace std;

int print(string n, int size)
{
    if (size <= 0)
        return 0;
    int count = 0;
    print(n, n.size() - 1);
    count++;

    return count;
}

int main()
{

    string s;
    cin >> s;
    int n;
    cout << print(s, s.size()) << endl;
    return 0;
}