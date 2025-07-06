#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int maxx=-1e9, ok=0,hieu;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    ok=1;
                    hieu=a[j]-a[i];
                    maxx=max(maxx,hieu);
                }
            }
        }
        if(ok==0) cout<<"-1\n";
        else cout<<maxx<<endl;
    }
    return 0;
}