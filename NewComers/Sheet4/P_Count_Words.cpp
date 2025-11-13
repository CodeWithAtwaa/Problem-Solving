#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;
    // mohamed ...
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }else {
            inWord = false;
        }
    }

    cout<< count <<endl;
    return 0;
}
