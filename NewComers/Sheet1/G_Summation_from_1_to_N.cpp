#include <iostream>
#include <iomanip>
// #include <math>
#define PI 3.141592653
#define ll long long
using namespace std;

// (n(n+1)) / 2

int main()
{
    ll n;
    cin >> n;
    cout << (n * (n + 1)) / 2 << endl;  // O(1)  // O(n) 
    return 0;
}