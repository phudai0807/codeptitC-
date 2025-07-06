#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    set<string> se;
    cin.ignore();
    while(test--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string tmp;
        while(ss>>word){
            tmp+=word;
        }
        se.insert(tmp);
    }
    cout << se.size();
    return 0;
}