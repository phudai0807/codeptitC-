#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    double s=0;
    for(double i=1; i<=n; i++){
        s += 1/i;
    }
    cout << setprecision(4) << fixed << s;
    return 0;
}