#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int in;
    long long ll;
    char ch;
    float f;
    double d;
    cin >> in >> ll >> ch >> f >> d;
    cout << in << endl;
    cout << ll << endl;
    cout << ch << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(1) << d << endl;
}