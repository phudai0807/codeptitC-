#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        long long k;
        cin >> n >> k;
        long long s=0;
        for(int i=1; i<=n; i++){
            s+= i%k;
        }
        if(k==s){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}