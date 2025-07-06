#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int tr,ph;
		cin>>tr>>ph;
		vector<int>v;
		for(int i=tr;i<=ph;i++){
			v.push_back(a[i]);
		}
		int l=0,r=v.size()-1;
		while(v[l]<=v[l+1]){
			++l;
		}
		while(v[r]<=v[r-1]){
			--r;
		}
		if(l>=r) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}