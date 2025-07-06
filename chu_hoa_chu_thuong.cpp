#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        char s;
        cin >> s;
        if(islower(s)){
            s=toupper(s);
        }
        else if(isupper(s)){
            s=tolower(s);
        }
        cout << s << endl;
    }
    return 0;
}