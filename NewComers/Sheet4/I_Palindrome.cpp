#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool found = true;
    for (int i = 0; i < s[i]; i++)
    {
        if(s[i] != s[s.size() -1 - i]) {
            found = false;
            break;
        }
    }
    if(found) {
       cout<<"YES"<<endl; 
    }else{
        cout<<"NO" << endl;
    }
}