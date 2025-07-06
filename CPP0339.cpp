#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    getchar();
    while(test--){
    string n;
    getline(cin, n);
    int dem=0;
    for(int i=0; i<n.length(); i++){
        for(int j=i; j<n.length(); j++){
            if(n[i]==n[j]){
                dem++;
            }
        }
    }
    cout << dem << endl;
    }
}