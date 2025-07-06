#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            int count=0; 
            for(int j=0; j<s.length(); j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            if(count==1){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}