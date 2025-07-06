#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        cin >> n >> k;
        vector<int> m(n);
        for(int i=0; i<n; i++){
            cin >> m[i];
        }
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(m[i]+m[j]==k){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}