#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long x, y ,z, n;
        cin >> x >> y >> z >> n;
        long long lcm_xy= x/gcd(x, y) * y;
        long long lcm_xyz= lcm_xy/gcd(lcm_xy, z) * z;
        long long up= pow(10, n-1);
        long long results=0;
        if(up%lcm_xyz==0){
            results=up;
        }
        else{
            results= (up/lcm_xyz+1) * lcm_xyz;
        }
        if(results>pow(10, n)){
            cout << "-1" << endl;
        }
        else{
            cout << results << endl;
        }
    }
    return 0;
}