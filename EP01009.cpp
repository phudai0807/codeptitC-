#include<bits/stdc++.h>
#include<cmath>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);  
    }
}
long long findGCD(long long a, long long x, long long y){
    long long P=0;
    for(long long i=0; i<x; i++){
        P= P*10 + a;
    }
    long long Q=0;
    for(long long i=0; i<y; i++){
        Q= Q*10 + a;
    }
    return gcd(P, Q);
}
int main(){
    long long T;
    cin >> T;
    while(T--){
        long long a, x, y;
        cin >> a >> x >> y;
        cout << findGCD(a, x, y) << endl;
    }
    return 0;
}