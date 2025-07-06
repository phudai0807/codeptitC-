#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, p;
    cin >> n >> m >> p;
    int A[100][100], B[100][100], P[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cin >> B[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            P[i][j]=0;
            for(int k=0; k<m; k++){
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            cout << P[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}