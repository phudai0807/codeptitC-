#include<bits/stdc++.h>

using namespace std;

int coun=0;
class SinhVien{
    private:
        string ma, name, grade, date;
    public:
        double gpa;
        friend istream& operator >> (istream& in, SinhVien& a);
        friend ostream& operator << (ostream& out, SinhVien& a);
        friend void sapxep(SinhVien&);
};

istream& operator >> (istream& in, SinhVien& a){
    coun++;
    a.ma = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    getline(in>>ws, a.name);
    getline(in>>ws, a.grade);
    getline(in>>ws, a.date);
    in >> a.gpa;
    //name
    string res="";
    stringstream ss(a.name);
    string token;
    while(ss>>token){
        res+=toupper(token[0]);
        for(int i=1; i<token.length(); i++){
            res+=tolower(token[i]);
        }
        res+=" ";
    }   
    res.erase(res.length()-1);
    a.name=res;
    //ngaysinh
    if(a.date[1]=='/'){
        a.date.insert(0, "0");
    }
    if(a.date[4]=='/'){
        a.date.insert(3, "0");
    }
    return in;
}

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien* ds, int N){
    sort(ds, ds+N, cmp);
}

ostream& operator << (ostream& out, SinhVien& a){
    out << a.ma << " " << a.name << " " << a.grade << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(int i=0; i<N; i++){
        cout << ds[i];
    }
    return 0;
}