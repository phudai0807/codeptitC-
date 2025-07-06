#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if(n<2){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
long long findlastNum(long long n){
    long long maxPrime= 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0 && isPrime(i)){
            while(n%i==0){
                maxPrime=i;
                n/=i;
            }
        }
    }
    if(n>2 && isPrime(n)){
        maxPrime=n;
    }
    return maxPrime;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long results= findlastNum(n);
        cout << results << endl;   
    }
    return 0;
}