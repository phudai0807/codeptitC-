#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    string de1= "ABBADCCABDCCABD";
    string de2= "ACCABCDDBBCDDBB";
    while(t--){
        string answerStudent;
        int n;
        cin >> n;
        double correct= 15;
        for(int i=0; i<15; i++){
            cin >> answerStudent[i];
            if(n==101){
                if(de1[i]!=answerStudent[i]){
                    correct--;
                }
            }
            else if(n==102){
                if(de2[i]!=answerStudent[i]){
                    correct--;
                }
            }
        }
        cout << setprecision(2) << fixed << correct * 10 / 15 << endl;
    }
    return 0;
}