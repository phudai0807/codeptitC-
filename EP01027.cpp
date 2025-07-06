#include<bits/stdc++.h>
double findSquareRoots(double n){
    double k=0, i=0;
    while(i<n){
        k=i+1+sqrt(k);
        i++;
    }
    return sqrt(k);
}
int main(){
    long long test;
    std::cin >> test;
    while(test--){
        double n;
        std::cin >> n;
        double results= findSquareRoots(n);
        std::cout << std::setprecision(5) << std::fixed << results << std::endl;
    }
    return 0;
}