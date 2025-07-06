#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long t;
        cin >> t;
        string s= to_string(t);
        int i=0;
        string res;
        while(i<s.size()){
            if(s[i]=='0'){
                if(s[i+1]=='8' && s[i+2]=='4'){
                    i+=3;
                }
                else if(s[i+1]=='8' && s[i+2]!='4'){
                    res+= s[i];
                    i++;
                }
                else if(s[i+1]!='8'){
                    res+= s[i];
                    i++;
                }
            }
            else{
                res+=s[i];
                i++;
            }
        }
        long long a= stoll(res);
        cout << a << endl;
    }
    return 0;
}