#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int M[100][100];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> M[i][j];
            }
        }
        int N[100][100] = {0};
        for(int j=0; j<m; j++){
            N[0][j]=M[0][j];
            for(int i=0; i<n; i++){
                if(M[i][j]==0){
                    N[i][j]=0;
                }
                else{
                    N[i][j]=N[i-1][j]+1;
                }
            }
        }
        for(int i=0; i<n; i++){
            sort(N[i], N[i]+m);
        }
        int res=0;
        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                res = max(res, N[i][j]*(m-j));
            }
        }
        cout << res << endl;
    }
    return 0;
}