#include<bits/stdc++.h>
using namespace std;
long long isSpecialNumber(long long a){
    long long sum=0;
    long long results= a;
    while(a>0){
        long long k=a%10;
        sum+=k;
        a/=10;
    }
    if(sum<2){
        return -1;
    }
    for(int i=2; i<=sqrt(sum); i++){
        if(sum%i==0){
            return -1;
        }
    }
    return results;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long results= isSpecialNumber(n);
        cout << results << endl;
    }
    return 0;
}