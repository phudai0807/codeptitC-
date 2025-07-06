#include<bits/stdc++.h>
using namespace std;
int main(){
    string de101= "ABBADCCABDCCABD";
    string de102= "ACCABCDDBBCDDBB";
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double correct=15;
        string answerStudent;
        for(int i=0; i<15; i++){
            cin >> answerStudent[i];
            if(n==101){
                if(answerStudent[i] != de101[i]){
                    correct--;
                }
            }
            else if(n==102){
                if(answerStudent[i] != de102[i]){
                    correct--;
                }
            }
        }
        cout << fixed <<setprecision(2) << correct * 10 /15 << endl;
    }
    return 0;
}