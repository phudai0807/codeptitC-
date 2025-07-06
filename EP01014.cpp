#include<bits/stdc++.h>
using namespace std;
long long minCoins(long long n){
    vector<int> coins= {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int sum=0;
    for(int i= coins.size()-1; i>=0; i--){
        long long currCoins= n/ coins[i];
        sum += currCoins;
        n-= currCoins*coins[i];
    }
    return sum;
}
int main(){
    long long T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        cout << minCoins(n) << endl;
    }
    return 0;
}