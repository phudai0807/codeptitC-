#include<bits/stdc++.h>
using namespace std;
bool lienke(long long n){
    string c= to_string(n);
    long long k=0;
    while((k+1) < c.size()){
        if(abs(c[k]-c[k+1]) != 1){
            return false;
            break;
        }
        k++;
    }
    return true;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        if(lienke(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}