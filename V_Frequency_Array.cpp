#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *freq = new int[m +1 ]{0};
    for (int i = 0; i < n; i++)
    {
        
            freq[arr[i]]++;
    }

    for (int i = 1; i < m +1; i++)
    {
        if (freq[i] > 0)
        {
            cout << freq[i] << endl;
        }
    }
}
