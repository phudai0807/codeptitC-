#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> m(n);
    for(int i=0; i<n; i++){
        getline(cin, m[i]);
    }
    int count=0;
    for(int i=0; i<n-1; i++){
        int s=0;
        for(int j=0; i<i; j++){
            if(m[i]==m[j]){
                s++;
            }
        }
        if(s>0){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(m[i]==m[j]){
                count++;
            }
        }
    }
    cout << n-count;
    return 0;
}