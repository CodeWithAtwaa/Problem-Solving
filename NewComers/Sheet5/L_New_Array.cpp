#include <iostream>
using namespace std;

void concat(int *a, int *b, int n)
{
    bool foundA = false;

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (foundA)
        {
            cout << " ";
        }
        foundA = true;
        cout << a[i];
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    concat(arr, arr1, n);
}