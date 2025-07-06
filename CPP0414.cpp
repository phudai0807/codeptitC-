#include<bits/stdc++.h>
using namespace std;

void solve(long long n, set<int>& se){
    while(n>0){
        int so=n%10;
        se.insert(so);
        n/=10;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        set<int> se;
        long long a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            solve(a[i], se);
        }
        for(int results:se){
            cout << results << " ";
        }
        cout << endl;
    }
}