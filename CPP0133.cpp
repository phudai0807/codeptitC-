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
void findPrimeNum(long long n){
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        findPrimeNum(n);
    }
    return 0;
}