#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }else{
        return gcd(b, a%b);
    } 
}
long long lcm(long long a, long long b){
    return (a/gcd(a, b))*b;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a,b) << endl;
    }
    return 0;
}