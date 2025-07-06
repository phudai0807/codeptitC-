#include<iostream>
using namespace std;
long long reverseNum(long long n){
    long long reversed=0;
    while(n>0){
        reversed= (reversed*10) + (n%10);
        n/=10;
    }
    return reversed;
}
int main(){
    long long n;
    cin >> n;
    long long results= reverseNum(n);
    cout << results;
    return 0;
}