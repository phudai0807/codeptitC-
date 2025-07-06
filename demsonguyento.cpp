#include <bits/stdc++.h>
using namespace std;
void sang(int l,int r){
	int cnt=0;
	int n=r-l+1;
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=1;
	}
	for(int i=2;i<=sqrt(r);i++){
		for(int j=max(i*i,(l+i-1)/i*i);j<=r;j+=i){
			a[j-l]=0;
		}
	}
	for(int i=max(l,2);i<=r;i++){
		if(a[i-l]) ++cnt;
	}
	cout<<cnt<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		int l,r;cin>>l>>r;
		sang(l,r);
	}
	return 0;
}