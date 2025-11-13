#include<iostream>
using namespace std;

void print(long long n ){
    bool found = false;
    for(int i =1 ; i<= n ;i++){
        if(found) {
            cout<< " ";
        }
        cout<<i ;
        found = true;
    }
}

int main() {
    long long a ;cin >> a;
    print(a);
}