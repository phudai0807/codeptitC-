#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum=0;
    long long p=1;
    for(int i=1; i<=n; i++){
        p=p*i;
        sum=sum+p;
    }
    cout << sum;
    return 0;
}