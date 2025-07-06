#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        long long a, m;
        cin >> a >> m;
        int k=0;
        for(int i=0; i<=(m-1); i++){
            if((i * a % m) == 1){
                cout << i << endl;
                k++;
                break;
            }
        }
        if(k==0){
            cout << "-1" << endl;
        }
    }
    return 0;
}