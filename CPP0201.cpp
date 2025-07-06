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
        int min=1000;
        for(int i=0; i<n-1; i++){
            if(min > abs(m[i+1]-m[i])){
                min= abs(m[i+1]-m[i]);
            }
        }
        cout << min << endl;
    }
    return 0;
}