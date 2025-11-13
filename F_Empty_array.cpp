#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
const int MOD = 100000;

#define dd                      \
    int n;                      \
    cin >> n;                   \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dd;

    int size = *max_element(arr.begin(), arr.end());
    vector<int> freq(size + 1, 0);
    for (int num : arr)
        freq[num]++;

    vector<int> temp;
    for (int i = 0; i <= size; i++)
        if (freq[i])
            temp.push_back(i);

    bool showa = false;
    while (!showa)
    {
        showa = true;
        bool first = true;
        for (int num : temp)
        {
            if (freq[num] > 0)
            {
                if (!first)
                    cout << " ";

                    
                cout << num;
                freq[num]--;
                showa = false;
                first = false;
            }
        }
        if (!showa)
            cout << "\n";
    }
}
