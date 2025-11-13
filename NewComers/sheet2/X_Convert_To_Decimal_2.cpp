// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// string ConvertToBinary(int n)
// {
//     string Binary = "";
//     while (n > 0)
//     {
//         Binary = to_string(n % 2) + (Binary);
//         n /= 2;
//     }
//     return Binary;
// }

// string Count(string s)
// {
//     string res = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '1')
//             res = s[i] + res;
//     }
//     return res;
// }

// int ConvertToDecimal(string s)
// {
//     int sum = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         sum += (1 * pow(2, i));
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int a;
//         cin >> a;
//         cout << ConvertToDecimal(Count(ConvertToBinary(a))) << endl;
//     }
// }



#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string ConvertToBinary(int n) {
    if (n == 0) return "0";
    string Binary = "";
    while (n > 0) {
        Binary = to_string(n % 2) + Binary;
        n /= 2;
    }
    return Binary;
}

string Count(string s) {
    string res = "";
    for (char c : s) {
        if (c == '1') res.push_back('1');
    }
    return res;
}

int ConvertToDecimal(string s) {
    int sum = 0;
    int power = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            sum += pow(2, power);
        }
        power++;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << ConvertToDecimal(Count(ConvertToBinary(a))) << endl;
    }
}
