#include<iostream>
#include<fstream>
using namespace std;
struct NhanVien{
    string maso, hoten;
    float hs, lcb, pc;
};
int main(){
    int n;
    cout << "So luong nhan vien: ";
    cin >> n;
    cin.ignore();

    fstream file("test.dat", ios::out|ios::binary);
    for(int i=0; i<n; i++){
        struct NhanVien nv;
        cout << "Thong yin nhan vien thu " << i+1 << "\n";
        getline(cin, nv.maso);
        getline(cin, nv.hoten);
        cin >> nv.hs >> nv.lcb >> nv.pc;
        cin.ignore();

        file.write(reinterpret_cast<char *>(&nv), sizeof(NhanVien));
    }
    file.close();
    file.open("test.dat", ios::in|ios::binary);
    while()
}