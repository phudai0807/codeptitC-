#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin >> test;
    while(test--){
        double a, b, c , d;
        cin >> a >> b >> c >> d;
        double sum= sqrt((c-a)*(c-a) + (d-b)*(d-b));
        cout << setprecision(4) << fixed << sum << endl;
    }
    return 0;
}