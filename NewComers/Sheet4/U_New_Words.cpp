#include <iostream>
#include <string>
#include <cctype>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char &c : s) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }

    string target = "egypt";
    int mn = INT_MAX;
    for (char c : target) {
        mn = min(mn, freq[c - 'a']);
    }

    cout << mn << "\n";
    return 0;
}
