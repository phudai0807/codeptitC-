#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
long long leastNum(long long n){
    long long lcm=1;
    for(long long i=2; i<=n; i++){
        lcm= lcm * i / gcd(lcm, i);
    }
    return lcm;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        cout << leastNum(n) << endl;
    }
    return 0;
}