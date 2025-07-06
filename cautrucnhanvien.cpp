#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string masothue;
    string ngaykihopdong;
};
void nhap(NhanVien &a){
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.ngaykihopdong);
}
void in(NhanVien a){
    cout << "00001" << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.masothue << " " << a.ngaykihopdong;
}
int main(){
    struct NhanVien A;
    nhap(A);
    in(A);
    return 0;
}
