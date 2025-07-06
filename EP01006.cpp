#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
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
pair<int, int> findPrimePair(int n){
    for(int i=2; i<=n/2; i++){
        if(isPrime(i) && isPrime(n-i)){
            return {i, n-i};
        }
    }
    return {-1, -1};
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        pair<int, int> primePair = findPrimePair(n);
        if(primePair.first!=-1 && primePair.second!=-1){
            cout << primePair.first << " " << primePair.second << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
