#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int x=0;
        for(int i=0; i<s.length(); i++){
            x = (2*x+s[i]-'0')%5;
        }
        if(x%5==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}