#include<bits/stdc++.h>
using namespace std;

long long f[100];
long long isFibonacci(long long n){
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n; i++){
        f[i]= f[i-1]+f[i-2];
    }
    return f[n];
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long results= isFibonacci(n);
        cout << results << endl;
    }
    return 0;
}