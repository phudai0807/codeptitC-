#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum1=0,sum2=0;
		for(int i=0;i<s.size();i+=2) sum1+=s[i]-'0';
		for(int i=1;i<s.size();i+=2) sum2+=s[i]-'0';
		if(abs(sum1-sum2)%11) cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}
