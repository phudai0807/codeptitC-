#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long a[n];
        int max=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(max<a[i]){
                max=a[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}