#include<bits/stdc++.h>
int main(){
    long long test;
    std::cin >> test;
    while(test--){
        long long n;
        std::cin >> n;
        long long s= (n+1) * n / 2;
        std::cout << s << std::endl;
    }
    return 0;
}