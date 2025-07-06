#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct PhanSo{
    long long a, m;
};
void nhap(PhanSo &p){
    cin >> p.a >> p.m;
}
void rutgon(PhanSo &p){
    long long x= __gcd(p.a, p.m);
    p.a/=x;
    p.m/=x;
}
void in(PhanSo p){
    cout << p.a << "/" << p.m;
}
int main(){
    struct PhanSo P;
    nhap(P);
    rutgon(P);
    in(P);
    return 0;
}