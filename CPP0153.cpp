#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    long long k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long s=0;
        for(int i=1; i<=n; i++){
            s+= i%k;
        }
        cout << s << endl;
    }
    return 0;
}