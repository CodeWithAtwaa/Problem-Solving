#include <iostream>
#include <iomanip>
using namespace std;

double avr(double *arr, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum / n;
}

int main()
{
    int n;
    cin >> n;
    double *arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<fixed << setprecision(7) << avr(arr, n) << endl;
}
