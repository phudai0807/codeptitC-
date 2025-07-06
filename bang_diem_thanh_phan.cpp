#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string msv;
    string hoten;
    string lop;
    double diem1, diem2, diem3;
};
bool cmp(SinhVien a, SinhVien b){
    return a.hoten < b.hoten;
}
void nhap(SinhVien ds[], int n){
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, ds[i].msv);
        getline(cin, ds[i].hoten);
        getline(cin, ds[i].lop);
        cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
    }
    sort(ds, ds+n, cmp);
}
void xuat(SinhVien ds[], int n){
    for(int i=0; i<n; i++){
        cout << i+1 << " " << ds[i].msv << " " << ds[i].hoten << " " << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
    }
}
int main(){
    struct SinhVien ds[100];
    int n;
    cin >> n;
    nhap(ds, n);
    xuat(ds, n);
    return 0;
}