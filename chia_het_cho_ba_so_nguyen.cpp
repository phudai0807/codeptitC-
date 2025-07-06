#include<iostream>
#include<cmath>

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
    int t;
    cin >> t;
    while(t--){
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        long long left = pow(10, n-1);
        long long right = pow(10, n);
        long long a = x*y/gcd(x, y);
        a = a*z/gcd(a, z);
        if(a>=right){
            cout << -1 << endl;
        }
        else{
            long long c = left%a;
            long long u = left+a-c;
            if(c==0){
                cout << left << endl;
            }
            else{
                cout << u << endl;
            }
        }
    }
    return 0;
}