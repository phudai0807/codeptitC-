#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        int ma=-1e5;
        int mi=1e5;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mi= min(a[i], mi);
            ma= max(a[i], ma);
            mp[a[i]]++;
        }
        int cnt=0;
        for(int i=mi; i<ma; i++){
            if(mp[i]==0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}