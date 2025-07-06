#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int> m(n);
        for(int i=0; i<n; i++){
            cin >> m[i];
        }
        sort(m.begin(), m.end());
        for(int i=0; i<n; i++){
            cout << m[i] << " ";
        }
        cout << endl;
    } 
    return 0;
}