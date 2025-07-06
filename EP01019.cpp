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
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long min_val= min(min(a, b), min(c, d));
    for(long long e= min_val; e>=1; e--){
        if(a%e==b%e && b%e==c%e && c%e==d%e){
            cout << e;
            break;
        }
    }
    return 0;
}