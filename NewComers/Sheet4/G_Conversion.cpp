#include <iostream>
#include <string>
using namespace std;


int main() {
    string s; 
    cin >>s;

    for(int i =0 ; i< s.size() ;i++) {
        if(s[i] == ',') {
            cout<< " ";
        }else if(int(s[i]) >= 65 && int(s[i]) <= 90) {
            cout<< (char)(s[i] + 32);
        }else {
            cout<< (char)(s[i] - 32);
        }
    }
    cout<<endl;
}