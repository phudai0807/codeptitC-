#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int A[101][101];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> A[i][j];
            }
        }
        for(int i=0; i<n; i++){
            if(i%2==0){
                for(int j=0; j<n; j++){
                    cout << A[i][j] << " ";   
                }
            }
            else{
                for(int j= n-1; j>=0; j--){
                    cout << A[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}