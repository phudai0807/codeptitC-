#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s[a[i]]++;
        }
        int cnt=0;
        for(auto it=s.begin(); it!=s.end(); it++){
            if((*it).second>1){
                cnt+= (*it).second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}