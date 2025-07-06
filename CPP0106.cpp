#include<bits/stdc++.h>
#include<string>
using namespace std;
bool thuannghich(long long n){
    string str= to_string(n);
    int left= 0;
    int right= str.size() - 1 ;
    while(left<right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    long long test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        if(thuannghich(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}