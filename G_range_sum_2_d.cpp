// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
#include <utility>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long
#define vi vector<int>

using namespace std;

void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

// prefix sum of 2D matrix
vector<vi> prefixsum(vector<vi> &mat)
{
    vector<vi> pre(mat.size(), vi(mat[0].size()));
    for (int i = 0; i < mat.size(); i++)
    {
        partial_sum(mat[i].begin(), mat[i].end(), pre[i].begin());
    }

    for (int i = 0; i < mat[0].size(); i++)
    {
        for (int j = 1; j < mat.size(); j++)
        {
            pre[j][i] += pre[j - 1][i];
        }
    }
    return pre;
}

int sumX(int x1, int y1, int x2, int y2, vector<vi> &pre)
{
    int sum = pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> arr(n + 1, vector<ll>(m + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // row
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            arr[i][j] += arr[i][j - 1];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            arr[i][j] += arr[i - 1][j];
        }
    }
    int x1, y1, x2, y2;
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1] << endl;
    }
    return 0;
}