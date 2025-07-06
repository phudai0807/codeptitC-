#include<bits/stdc++.h>
using namespace std;
bool isBalanced(long long num){
    int evenNum=0, oddNum=0;
    while(num>0){
        int digit= num%10;
        if(digit%2==0){
            evenNum++;
        }
        else{
            oddNum++;
        }
        num/=10;
    }
    if(evenNum == oddNum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    long long n;
    cin >> n;
    long long start= pow(10, n-1);
    long long end= pow(10, n);
    int count=0;
    for(long long i=start; i<end; i++){
        if(isBalanced(i)){
            cout << i << " ";
            count++;
        }
        if(count%10==0){
            cout << endl;
        }
    }
    return 0;
}