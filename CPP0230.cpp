#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int A[1001][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> A[i][j];
        }
    }
    int count=0;
    for(int i=0; i<n; i++){
        int a=0, b=0;
        for(int j=0; j<3; j++){
            if(A[i][j]==1){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b){
            count++;
        }
    }
    cout << count;
    return 0;
}