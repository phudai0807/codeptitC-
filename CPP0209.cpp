#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> m, int a, int b){
    int x=0;
    for(int i=a-1; i<b; i++){
        x += m[i];
    }
    return x;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> m(n);
        for(int i=0; i<n; i++){
            cin >> m[i];
        }
        while(k--){
            int l, r;
            cin >> l >> r;
            cout << sum(m, l, r) << endl;
        }
    }
    return 0;
}