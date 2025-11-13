#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a , b ; 
    cin >> a >> b;
    long long res = a - b; 
    if(res >=0) {
        cout<<a-b <<endl;
    }else {
        cout << 0 <<endl;
    }
}