#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n){
    int count=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i==i){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    return count;
}
void findNum(long long n){
    for(int i=1; i<=n; i++){
        if(countDivisors(i)==3){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        findNum(n);
    }
    return 0;
}