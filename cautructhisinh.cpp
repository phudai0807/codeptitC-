#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name;
    string date;
    double score1, score2, score3;
};
void nhap(struct ThiSinh &a){
    getline(cin, a.name);
    getline(cin, a.date);
    cin >> a.score1 >> a.score2 >> a.score3;
}
void in(struct ThiSinh a){
    cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.score1+a.score2+a.score3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
