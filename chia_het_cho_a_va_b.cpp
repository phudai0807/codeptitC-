#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int cnt=0;
        for(int i=n; i<=m; i++){
            if(i%a==0 || i%b==0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}