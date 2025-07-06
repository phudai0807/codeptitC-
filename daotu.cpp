#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		stringstream ss(a);
		string tmp;
		vector<string>v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		for(auto it=v.rbegin();it!=v.rend();++it){
			cout<<*it<<' ';
		}
		cout<<endl;
	}
	return 0;
}