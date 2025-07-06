#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten;
    string lop;
    string ngaysinh;
    double gpa;
};
void nhap(SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.ngaysinh);
    cin >> a.gpa;
}
void in(SinhVien a){
    if(a.ngaysinh[2]!='/'){
        a.ngaysinh.insert(0, "0");
    }
    if(a.ngaysinh[5]!='/'){
        a.ngaysinh.insert(3, "0");
    }
    cout << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ngaysinh << " " << fixed << setprecision(2) << a.gpa; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}