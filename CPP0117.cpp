#include<bits/stdc++.h>
using namespace std;
long long tong(long long n){
    long long sum=0;
    while(n>0){
        long long k=n%10;
        sum+=k;
        n/=10;
    }
    if(sum>=0 && sum<10){
        return sum;
    }
    else{
        return tong(sum);
    }
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long sum= tong(n);
        cout << sum << endl;
    }
    return 0;
}