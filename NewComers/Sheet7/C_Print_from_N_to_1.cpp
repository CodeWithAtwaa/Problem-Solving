#include <iostream>
using namespace std;

bool found = false;
void print(int n)
{
    if(n <= 0) return;
    
    if(found) {
        cout<< " ";
    }
    cout << n ;
    found = true;
    print(n-1);
}

int main()
{

    int n;
    cin >> n;
    print(n);
    return 0;
}