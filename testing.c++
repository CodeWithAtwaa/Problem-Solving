#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include <string>
#include <set>
#include <utility>
#include <utility>
#include <algorithm>

#define ll long long
using namespace std;

int BinarySerch(vector<ll> arr, int n, int key)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid =  (r+ l) / 2;
        if (arr[mid] == key)
        {
           return mid;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    ll n, key;
    cin >> n >> key;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << BinarySerch(arr, n, key) << endl;
}