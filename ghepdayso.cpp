#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int k, n;
        cin >> k >> n;
        vector<long long> m(k*n);
        for(int i=0; i< k*n; i++){
            cin >> m[i];
        }
        sort(m.begin(), m.end());
        for(int i=0; i< k*n; i++){
            cout << m[i] << " ";
        }
        cout << endl;
    }
    return 0;
}