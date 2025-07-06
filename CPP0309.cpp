#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    getchar();
    while(test--){
        string s;
        getline(cin, s);
        int count=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'){
                count++;
            }
        }
        cout << count+1 << endl;
    }
    return 0;
}