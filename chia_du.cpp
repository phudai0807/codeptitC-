#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a, m;
		cin >> a >> m;
		for(int i=0; i< m-1; i++){
			if((a*i) % m ==1){
				cout << i << endl;
			}
		}
	}
	return 0;
}