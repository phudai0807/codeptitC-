#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=2*i-1; j++){
            cout << num++;   
        }
        cout << endl;
    }
    return 0;
}