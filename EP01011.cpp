#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectNumber(int n){
    int sqrtNum= sqrt(n);
    return (sqrtNum * sqrtNum == n);
}
int sumofPerfect(int a, int b){
    long long sum=0;
    for(int i=a; i<=b; i++){
        if(isPerfectNumber(i)){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int a, b;
    cin >> a >> b;
    int results= sumofPerfect(a, b);
    cout << results;
    return 0;
}