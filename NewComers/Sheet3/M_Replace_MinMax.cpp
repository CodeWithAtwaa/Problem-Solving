#include <iostream>
#include <climits>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    int *arr = new int[t];
    int mn = INT_MAX;
    int mx = INT_MIN;
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
            minIndex = i;
        }

        if (arr[i] > mx)
        {
            mx = arr[i];
            maxIndex = i;
        }
    }

    bool found = false;
    swap(arr[minIndex], arr[maxIndex]);
    for (int i = 0; i < t; i++)
    {
        if(found == true) {
            cout<< " ";
        }
       cout << arr[i];
       found = true;
    }
}