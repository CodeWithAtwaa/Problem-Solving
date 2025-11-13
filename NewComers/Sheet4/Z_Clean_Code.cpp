#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    bool inBlock = false;
    while (getline(cin, line))
    {
        string result = "";
        for (int i = 0; i < (int)line.size();)
        {
            if (!inBlock && i + 1 < line.size() && line[i] == '/' && line[i + 1] == '/')
            {
                break;
            }
            else if (!inBlock && i + 1 < line.size() && line[i] == '/' && line[i + 1] == '*')
            {
                inBlock = true;
                i += 2;
            }
            else if (inBlock && i + 1 < line.size() && line[i] == '*' && line[i + 1] == '/')
            {
                inBlock = false;
                i += 2;
            }
            else if (inBlock)
            {
                i++;
            }
            else
            {
                result += line[i];
                i++;
            }
        }
        int start = 0;
        while (start < result.size() && isspace(result[start]))
            start++;
        int end = result.size() - 1;
        while (end >= 0 && isspace(result[end]))
            end--;
        if (start <= end)
        {
            cout << result.substr(start, end - start + 1) << "\n";
        }
    }
    return 0;
}
