#include<bits/stdc++.h>

using namespace std;

class DoanhNghiep{
    private:
        string tendn;
    public:
        long long sosv;
        string madn;
        friend istream& operator >> (istream& in, DoanhNghiep& a);
        friend ostream& operator << (ostream& out, DoanhNghiep& a);
};

istream& operator >> (istream& in, DoanhNghiep& a){
    getline(in>>ws, a.madn);
    getline(in>>ws, a.tendn);
    in >> a.sosv;
    return in;
}

ostream& operator << (ostream& out, DoanhNghiep& a){
    out << a.madn << " " << a.tendn << " " << a.sosv << endl;
    return out;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.sosv>b.sosv){
        return true;
    }
    if(a.sosv==b.sosv && a.madn<b.madn){
        return true;
    }
    return false;
}

void sapxep(DoanhNghiep* ds, int N){
    sort(ds, ds+N, cmp);
}

int main(){
    DoanhNghiep ds[1000];
    int N;
    cin >> N;
    cin.ignore();
    for(int i=0; i<N; i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " " << "DEN " << b << " " << "SINH VIEN:" << endl;
        for(int i=0; i<N; i++){
            if(ds[i].sosv>=a && ds[i].sosv<=b){
                cout << ds[i];
            }
        }
    }
    return 0;
}