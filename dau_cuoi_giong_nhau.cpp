#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        int dem=0;
        for(int i=0; i<s.length(); i++){
            for(int j=i; j<s.length(); j++){
                if(s[i]==s[j]){
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}