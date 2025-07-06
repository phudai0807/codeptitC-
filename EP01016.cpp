#include<bits/stdc++.h>
using namespace std;
long long finalNumber(long long n){
    long long sum=0;
    while(n>0){
        long long k=n%10;
        sum+=k;
        n/=10;
    }
    if(sum<10 && sum>=0){
        return sum;
    }
    else{
        return finalNumber(sum);
    }
}
int main(){
    long long T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        cout << finalNumber(n) << endl;
    }
    return 0;
}