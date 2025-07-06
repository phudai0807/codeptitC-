#include<bits/stdc++.h>
using namespace std;
string test(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] != (s[s.length()-i-1])){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string a;
        for(int i=0; i<s.length(); i++){
            if(tolower(s[i])>='a' && tolower(s[i])<='c'){
                a += "2";
            }
            if(tolower(s[i])>='d' && tolower(s[i])<='f'){
                a += "3";
            }
            if(tolower(s[i])>='g' && tolower(s[i])<='i'){
                a += "4";
            }
            if(tolower(s[i])>='j' && tolower(s[i])<='l'){
                a += "5";
            }
            if(tolower(s[i])>='m' && tolower(s[i])<='o'){
                a += "6";
            }
            if(tolower(s[i])>='p' && tolower(s[i])<='s'){
                a += "7";
            }
            if(tolower(s[i])>='t' && tolower(s[i])<='v'){
                a += "8";
            }
            if(tolower(s[i])>='w' && tolower(s[i])<='z'){
                a += "9";
            }
        }
        cout << test(a) << endl;        
    }
    return 0;
}