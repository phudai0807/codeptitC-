#include<bits/stdc++.h>
using namespace std;
void ptich(long long n) {
    for(int i=2;i<=sqrt(n);i++) {
        int cnt = 0;
        if(n%i==0) {
            cout << i << " ";
            while(n%i==0) {
                cnt++;
                n/=i;
            }
            cout << cnt << endl;
        }
    }
    if(n != 1) cout << n << " " << 1 << endl;
}
int main(){
    long long n;
    cin >> n;
    ptich(n);
    return 0;
}