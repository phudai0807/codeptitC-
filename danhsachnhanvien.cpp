#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string masothue;
    string ngaykyhopdong;
};
int z=0;
void nhap(NhanVien &a){
    if(z==0) getchar();
    z++;
    getline(cin, a.hoten);
    getline(cin, a.gioitinh);
    getline(cin, a.ngaysinh);
    getline(cin, a.diachi);
    getline(cin, a.masothue);
    getline(cin, a.ngaykyhopdong);
}
void inds(NhanVien ds[], int N){
    for(int i=0; i<N; i++){
        string s;
        if(i<9){
            s="0000";
        }
        else{
            s="000";
        }
        cout << s << i+1 << " " << ds[i].hoten << " " << ds[i].gioitinh << " " << ds[i].ngaysinh << " " << ds[i].diachi << " " << ds[i].masothue << " " << ds[i].ngaykyhopdong << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(int i=0; i<N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}