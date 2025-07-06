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
vector<long long> findPrime(long long n){
    vector<long long> factors;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    return factors;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n, k;
        cin >> n >> k;
        vector<long long> factors= findPrime(n);
        if(k<=factors.size()){
            cout << factors[k-1] << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}