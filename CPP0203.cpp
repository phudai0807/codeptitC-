#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        set<int> s;
        for(int i=0; i<n; i++){
            int x;   
            cin >> x;
            s.insert(x);
        }
        for(int i=1; i<=1e6; i++){
            if(s.count(i)==0){
                cout << i;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}