#include<iostream>
#include<string>
using namespace std;


int main() {
    string s ; cin  >>s;
    int *arr = new int[26] {0};
    for(int i =0 ; i < s.size() ; i++){
        arr[s[i] - 97]++;
    }
    for(int i =0 ; i < 26; i++){
        if(arr[i] > 0){
            cout<< char(i + 97) << " : " <<arr[i] << endl;
        }
    }


}

