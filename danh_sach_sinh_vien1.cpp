#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
};
void input(SinhVien &a){
    getline(cin, a.hoten);
    getline(cin, a.lop);
    getline(cin, a.ngaysinh);
    cin >> a.gpa;
    cin.ignore();
}
void nhap(SinhVien ds[], int n){
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
        string s;
        if(i<9){
            s="B20DCCN00";
        }
        else{
            s="B20DCCN0";
        }
        cout << s << i+1 << " " << ds[i].hoten << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
