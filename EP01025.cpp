#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    char val;
    cin >> a >> val >> b;
    switch(val){
        case '+':
        cout << setprecision(2) << fixed << a+b;
        break;
        case '-':
        cout << setprecision(2) << fixed << a-b;
        break;
        case '*':
        cout << setprecision(2) << fixed << a*b;
        break;
        case '/':
        cout << setprecision(2) << fixed << a/b;
        break;
        default:
        cout << "NO";
    }
    return 0;
}