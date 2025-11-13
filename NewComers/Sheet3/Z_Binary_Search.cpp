#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

bool binary(ll arr[], int n, int key)
{
    int start = 0, right = n - 1;
    while (start <= right)
    {
        int mid = start + (right - start) / 2;
        if (arr[mid] == key)
        {
            return true;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int main()
{
    int n, t;
    cin >> n >> t;
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while (t--)
    {
        int key;
        cin >> key;

        if (binary(arr, n, key))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    delete[] arr; 
}
