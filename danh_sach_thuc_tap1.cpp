#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
    int stt;
    string msv;
    string hoten;
    string lop;
    string email;
    string doanhnghiep;
};
void nhap(DanhSach ds[], int n){
    for(int i=0; i<n; i++){
        ds[i].stt= i+1;
        getline(cin, ds[i].msv);
        getline(cin, ds[i].hoten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].email);
        getline(cin, ds[i].doanhnghiep);
    }
}
bool cmp(DanhSach a, DanhSach b){
    if(a.hoten<b.hoten){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    struct DanhSach a[n];
    nhap(a, n);
    sort(a, a+n, cmp);
    int q;
    cin >> q;
    string DoanhNghiep[5];
    for(int i=0; i<q; i++){
        cin >> DoanhNghiep[i];
    }
    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            if(DoanhNghiep[i]==a[j].doanhnghiep){
                cout << a[j].stt << " " << a[j].msv << " " << a[j].hoten << " " << a[j].lop << " " << a[j].email << " " << a[j].doanhnghiep << endl;
            }
        }
    }
    return 0;
}