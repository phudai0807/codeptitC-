#include<iostream>
using namespace std;
class Employee{
    //Thuoc tinh
    private:
        string id;
        string name;
        float hs;
        float lcb;
        float pc;
    public:
    //Phuong thuc
    string getid(){
        return id+"Xin chao";
    }
    string setid(){
        return this->id = id + "E23";
    }
    void TongLuong(){
        cout<<id;
        cout << "\n" << name << " " << "Co tong luong = " << lcb*hs+pc;
    }
    void NhapNV(){
        cin >> id >> name >> hs >> lcb >> pc;
    }
};
int main(){
    Employee emp1;
    emp1.NhapNV();
    emp1.getid();
    emp1.setid();
    emp1.TongLuong();
    return 0;
}