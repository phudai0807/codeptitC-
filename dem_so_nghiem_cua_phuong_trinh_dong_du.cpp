#include<bits/stdc++.h>

using namespace std;

int countsolutions(long long b, long long q){
    int count=0;
    for(long long i=1; i<=b; i++){
        if((i*i)%q == 1){
            if(b>=q){
                count += (b-i)/q+1;
            }else{
                ++count;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    vector<pair<long long, int>> test(t);
    for(int i=0; i<t; i++){
        cin >> test[i].first >> test[i].second;
    }
    for(int i=0; i<t; i++){
        long long b=test[i].first;
        int p=test[i].second;
        cout << countsolutions(b, p) << endl;
    }
    return 0;
}