#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '?') {
            temp = s.substr(i+1 , s.size() -1);
        }
    }

    for(int i =0 ; i < temp.size() ; i++){
        if(temp[i] == '=') {
            cout<<": ";
        }else
        if(temp[i] == '&') {
            cout<<endl;
        }else {
            cout<<temp[i];
        }
    }
    cout<<endl;
}