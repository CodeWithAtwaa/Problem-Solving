#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double x , p ;
    cin >> x >> p;
    double o ; 
    o = p / (1 - (x/ 100));
    cout<<fixed << setprecision(2) << o <<endl;
}