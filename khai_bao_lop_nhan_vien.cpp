#include<bits/stdc++.h>

using namespace std;

class NhanVien{
    private:
        string name, gender, birth, location, mst, date;
    public:
        friend istream& operator >> (istream& in, NhanVien &a);
        friend ostream& operator >> (ostream& out, NhanVien a);
};
istream& operator >> (istream& in,NhanVien &a) {
    getline(in >> ws,a.name);
    getline(in >> ws,a.gender);
    getline(in >> ws,a.birth);
    getline(in >> ws,a.location);
    getline(in >> ws,a.mst);
    getline(in >> ws,a.date);
    return in;
}
ostream& operator >> (ostream& out,NhanVien a) {
    out << "00001" << " " << a.name << " " << a.birth << " " << a.location << " " << a.mst << " " << a.date;
    return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}