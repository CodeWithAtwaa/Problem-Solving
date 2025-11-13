#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653
#define ll long long
#define mx INT_MIN
#define mn INT_MAX
using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = n / 1000;
    if( res % 2== 0){
        cout<<"EVEN\n";
    }else {
        cout<<"ODD\n";
    }
}