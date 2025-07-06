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
void primeFactor(long long n){
    for(long long i=2; i<=n; i++){
        if(n%i==0 && isPrime(i)){
            int count=0;
            while(n%i==0){
                n/=i;
                count++;
            }
            cout << i << " " << count << endl;
        }
    }
}
int main(){
    long long n;
    cin >> n;
    primeFactor(n);
    return 0;
}