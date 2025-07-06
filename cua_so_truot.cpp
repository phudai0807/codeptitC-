#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int M[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> M[i][j];
        }
    }
    int m;
    cin >> m;
    int N[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin >> N[i][j];
        }
    }
    for(int i=0; i<n; i+=m){
        for(int j=0; j<n; j+=m){
            for(int l=0; l<m; l++){
                for(int k=0; k<m; k++){
                    M[i+l][j+k]*=N[l][k];
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}