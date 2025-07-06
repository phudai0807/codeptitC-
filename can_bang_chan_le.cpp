#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    int oddNum=0;
    int evenNum=0;
    while(n>0){
        long long k=n%10;
        if(k%2==0){
            evenNum++;
        }
        else{
            oddNum++;
        }
        n/=10;
    }
    if(evenNum==oddNum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin >> n;
    long long start= pow(10, n-1);
    long long end= pow(10, n);
    int count=0;
    for(int i=start; i<end; i++){
        if(check(i)){
            cout << i << " ";
            count++;
        }
        if(count%10==0){
            cout << endl;
        }
    }
    return 0;
}