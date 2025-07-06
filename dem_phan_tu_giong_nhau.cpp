#include<iostream>
#include<cmath>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        map<int, int>mp;
        for(int i=0; i<n; i++){
            cnt++;
            for(int j=0; j<n; j++){
                if(mp[a[i][j]]==cnt-1){
                    mp[a[i][j]]=cnt;
                }
            }
        }
        int cnt2=0;
        for(auto x:mp){
            if(x.second==cnt){
                ++cnt2;
            }
        }
        cout << cnt2 << endl;
    }
    return 0;
}