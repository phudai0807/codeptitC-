#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        if((n%100)==86){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}