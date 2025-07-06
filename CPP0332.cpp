#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    getline(cin, n);
    for(int i=0; i<n.size(); i++){
        n[i]= tolower(n[i]);
    }
    stringstream ss(n);
    string word;
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    cout << v.back();
    for(auto it=v.begin(); it!=v.end()-1; it++){
        cout << (*it)[0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}