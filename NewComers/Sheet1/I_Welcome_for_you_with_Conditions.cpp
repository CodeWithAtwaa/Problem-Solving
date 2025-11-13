#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.141592653
#define ll long long
using namespace std;

class I_Welcome_for_you_with_Conditions
{
private:
    int a, b;

public:
    I_Welcome_for_you_with_Conditions(int a, int b)
    {
        this->a = a;
        this->b = b;
    };

    bool Check(int a, int b) { return a >= b; }
};

int main()
{
    int a, b;
    cin >> a >> b;
    I_Welcome_for_you_with_Conditions obj(a, b);
    (obj.Check(a, b)) ? cout << "Yes\n" : cout << "No\n";
}