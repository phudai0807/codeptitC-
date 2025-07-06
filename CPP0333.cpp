#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    getline(cin, n);
    for(int i=0; i<n.size(); i++){
        n[i] = tolower(n[i]);
    }
    for(int i=n.size()-1; n[i]!=' '; i--){
        n[i] = toupper(n[i]);
    }
    stringstream ss(n);
    string word;
    vector<string> v;
    while(ss >> word){
        word[0]= toupper(word[0]);
        v.push_back(word);
    }
    for(auto it=v.begin(); it!=v.end()-2; it++){
        cout << (*it) << " ";
    }
    cout << *(v.end()-2) << ", " << v.back() << endl;
    return 0;
}