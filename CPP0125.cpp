#include<bits/stdc++.h>
using namespace std;
bool primeNumber(long long n){
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
int main(){
    long long a, b;
    cin >> a >> b;
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i=a; i<=b; i++){;
        if(primeNumber(i)){
            cout << i << " ";
        }
    }
    return 0;   
}