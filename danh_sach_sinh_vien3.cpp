#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
string standardizeName(string name){
    for(int i=0; i<name.length(); i++){
        if(isalpha(name[i])){
            name[i]= tolower(name[i]);
        }
        else{
            name[i]=' ';
        }
    }
    for(int i=0; i<name.length(); i++){
        if(isalpha(name[i]) && (i==0 || name[i-1]==' ')){
            name[i]= toupper(name[i]);
        }
    }
    return name;
}
struct SinhVien{
    string ma;
    string hoten;
    string lop;
    string ngaysinh;
    double gpa;
};
void input(SinhVien &a){
    getline(cin, a.hoten);
    getline(cin, a.lop);
    getline(cin, a.ngaysinh);
    cin >> a.gpa;
    cin.ignore();
}
void nhap(SinhVien ds[], int n){
    for (int i = 0; i < n; i++) {
        ds[i].ma = "B20DCCN000";
        int tg = i + 1;
        for (int j = ds[i].ma.size() - 1; tg > 0; j--) {
            ds[i].ma[j] += tg % 10;
            tg /= 10;
        }
    }
    cin.ignore();
    for(int i=0; i<n; i++){
        input(ds[i]);
    }
}
void in(SinhVien ds[], int n){
    for(int i=0; i<n; i++){
        if(ds[i].ngaysinh[1]=='/'){
            ds[i].ngaysinh.insert(0, "0");
        }
        if(ds[i].ngaysinh[4]=='/'){
            ds[i].ngaysinh.insert(3, "0");
        }
        cout << ds[i].ma << " " << standardizeName(ds[i].hoten) << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
bool cmp(SinhVien a, SinhVien b){
    if(a.gpa>b.gpa){
        return true;
    }
    return false;
}
void sapxep(SinhVien* M, int n){
    sort(M, M+n, cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
