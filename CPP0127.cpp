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
pair<int, int> findPrime(long long n){
    for(int i=2; i <= n/2; i++){
        if(isPrime(i) && isPrime(n-i)){
            return make_pair(i, n-i);
        }
    }
    return make_pair(-1, -1);
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        pair<int, int> primeNum= findPrime(n);
        if(primeNum.first != -1){
            cout << primeNum.first << " " << primeNum.second << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}