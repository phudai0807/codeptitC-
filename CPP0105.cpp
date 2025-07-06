#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    while(n>0){
        long long k=n%10;
        if(k!=0 && k!=6 && k!=8){
            return false;
        }
        n/=10;
    }
    return true;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        if(check(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}