#include<bits/stdc++.h>
using namespace std;
long long sum(long long n, long long k){
    long long sum=0;
    for(int i=1; i<=n; i++){
        sum+=i%k;
    }
    return (sum==k) ? 1 : 0;
}
int main(){
    long long T;
    cin >> T;
    while(T--){
        long long n, k;
        cin >> n >> k;
        cout << sum(n, k) << endl;
    }
    return 0;
}