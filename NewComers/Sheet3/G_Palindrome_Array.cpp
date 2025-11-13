#include <iostream>
#include <string>
#include <cmath>
#define ll long long
#define mn INT_MAX
using namespace std;

int main() {
    int n;
    cin >> n;
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll *temp = new ll[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - 1 - i];
    }

    bool palindrome = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] != temp[i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
