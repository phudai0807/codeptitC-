#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n<2){
        return false;
    }
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int count=0;
        for(int i=1; i<=sqrt(n); i++){
            if(isPrime(i)){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}