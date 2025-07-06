#include<bits/stdc++.h>
using namespace std;
long long sumofDigits(long long n){
    long long sum=0;
    while(n>0){
        long long k=n%10;
        sum+=k;
        n/=10;
    }
    return sum;
}
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
long long gcdSum(long long n){
    while(true){
        long long sum= sumofDigits(n);
        long long gcdSum= gcd(n, sum);
        if(gcdSum>1){
            return n;
        }
        n++;
    }
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << gcdSum(n) << endl;
    }
    return 0;
}