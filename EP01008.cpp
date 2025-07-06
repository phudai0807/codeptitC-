#include<bits/stdc++.h>
using namespace std;
long long f[1000];
long long fibonacciCheck(){
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=1000; i++){
        f[i]=f[i-1]+f[i-2];
        return f[i];
    }
}
int main(){
    fibonacciCheck();
    long long T;
    cin >> T;
    while(T--){
        int ok=0;
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            for(int j=0; j<=1000; j++){
                if(f[j]==a[i]){
                    ok=1;
                }
                if(ok){
                    cout << a[i] << " ";
                }
            }
            cout << endl;
        }          
    }
    return 0;
}