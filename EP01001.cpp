#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(islower(a[i])){
            a[i]=toupper(a[i]);
        }else if(isupper(a[i])){
            a[i]=tolower(a[i]);
        }
        cout << a[i] << endl;
    }
    return 0;
}