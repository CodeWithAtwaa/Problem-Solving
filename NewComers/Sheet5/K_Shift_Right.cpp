#include <iostream>
#include <vector>
using namespace std;

// Function to shift array to the right
void shiftRight(vector<int> &arr, int n, int x)
{
    x %= n;
    if (x == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] <<  " ";
        }
        return;
    }

    vector<int> result(n);
    for (int i = 0; i < x; i++)
    {
        result[i] = arr[n - x + i];
    }
    for (int i = x; i < n; i++)
    {
        result[i] = arr[i - x];
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    shiftRight(arr, n, x);

    return 0;
}
