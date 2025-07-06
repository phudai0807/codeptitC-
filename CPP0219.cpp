#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        map<int, int> hng;
        map<int, int> ct;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                if(a[i][j]==1){
                    hng[i]=1;
                    ct[j]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(hng[i]!=0 || ct[j]!=0){
                    a[i][j]=1;
                }
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}