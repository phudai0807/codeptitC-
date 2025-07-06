#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
vector<int> primeFactors(int n){
    vector<int> factors;
    for(int i=2; i*i<=n; i++){
        while(n%i==0){
            factors.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        factors.push_back(n);
    }
    return factors;
}
bool isSphenic(int n){
    vector<int> factors= primeFactors(n);
    if(factors.size()!=3){
        return false;
    }
    for(int i=0; i<factors.size(); i++){
        for(int j=i+1; j<factors.size(); j++){
            if(factors[i]==factors[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        long long t;
        cin >> t;
        if(isSphenic(t)){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}