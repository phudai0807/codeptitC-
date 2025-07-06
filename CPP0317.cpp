#include<bits/stdc++.h>
using namespace std;

int thuannghich(string s){
    for(int i=0; i<s.length(); i++){
        if((s[i] !=  s[s.length()-i-1]) || (s[i]%2!=0)){
            return false;
        }
    }
    return true;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        if(thuannghich(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}