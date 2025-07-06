#include<bits/stdc++.h>
using namespace std;
int test(string s){
    for(int i=0; i<4; i++){
        if(s[i+1]<=s[i]){
            return false;
        }
    }
    return true;
}
int test1(string s){
    for(int i=0; i<4; i++){
        if(s[i]!=s[i+1]){
            return false;
        }
    }
    return true;
}
int test2(string s){
    for(int i=0; i<5; i++){
        if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]){
            return true;
        }
    }
    return  false;
}
int test3(string s){
    for(int i=0; i<5; i++){
        if(s[i]!='8' && s[i]!='6'){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string s;
        getline(cin, s);
        s.erase(0, 5);
        s.erase(3, 1);
        if(test(s) || test1(s) || test2(s) || test3(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}