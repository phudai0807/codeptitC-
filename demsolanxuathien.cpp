#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, x;
        cin >> n >> x;
        int a[n];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==x){
                mp[a[i]]++;
            }
        }
        if(mp[x]==0){
            cout << "-1";
        }
        else{
            cout << mp[x];
        }
        cout << endl;
    }
}