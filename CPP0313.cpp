#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, a;
    getline(cin, s);
    cin >> a;
    int x= s.find(a);
    s.erase(x, a.length()+1);
    cout << s;
    return 0;
}