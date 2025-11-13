#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define sz size()
#define pr pair<int, int>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1000000 + 5;
using namespace std;

int main()
{
    ios;
    int n, k;
    cin >> n >> k;
    int arr[n], sarr[n];
    rep(i, n)
    {
        cin >> arr[i];
        sarr[i] = arr[i];
    }
    sort(sarr, sarr + n);
    reverse(sarr, sarr + n);
    map<int, int> mp;
    rep(i, k)
    {
        mp[sarr[i]]++;
    }
    int sum = 0, cnt = 0;
    bool flag = 0;
    vector<int> v;
    rep(i, n)
    {
        cnt++;
        if (mp[arr[i]] != 0)
        {
            sum += arr[i];
            v.push_back(cnt);
            mp[arr[i]]--;
            flag = 1;
            cnt = 0;
        }
    }
    v[v.sz - 1] += cnt;
    cout << sum << endl;
    for (auto it : v)
        cout << it << " ";
}
