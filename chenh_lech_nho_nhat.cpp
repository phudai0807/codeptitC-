#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int> s;
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        long long min=1000;
        for(int i=0; i<n-1; i++){
            if(min > abs(s[i+1]- s[i])){
                min = abs(s[i+1]-s[i]);
            }
        }
        cout << min << endl;
    }
    return 0;
}