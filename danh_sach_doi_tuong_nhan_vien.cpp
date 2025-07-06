#include<bits/stdc++.h>

using namespace std;

int coun=0;
class NhanVien{
    private:
        string ma, name, gentle, birth, adress, mst, date;
    public:
        friend istream& operator >> (istream& in, NhanVien& a);
        friend ostream& operator << (ostream& out, NhanVien& a);
};

istream& operator >> (istream& in, NhanVien& a){
    coun++;
    a.ma = string(5 - to_string(coun).length(), '0') + to_string(coun);
    getline(in>>ws, a.name);
    getline(in>>ws, a.gentle);
    getline(in>>ws, a.birth);
    getline(in>>ws, a.adress);
    getline(in>>ws, a.mst);
    getline(in>>ws, a.date);
    return in;
}

ostream& operator << (ostream& out, NhanVien& a){
    out << a.ma << " " << a.name << " " << a.gentle << " " << a.birth << " " << a.adress << " " << a.mst << " " << a.date << endl;
    return out;
}

int main(){
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> ds[i];
    }
    for(int i=0; i<N; i++){
        cout << ds[i];
    }
    return 0;
}