#include<bits/stdc++.h>

using namespace std;

int coun=0;
class SinhVien{
    private:
        string ma, name, grade, birth;
        double gpa;
    public:
        friend istream& operator >> (istream& in, SinhVien& a);
        friend ostream& operator << (ostream& out, SinhVien& a);
};

istream& operator >> (istream& in, SinhVien& a){
    coun++;
    a.ma = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    getline(in>>ws, a.name);
    getline(in>>ws, a.grade);
    getline(in>>ws, a.birth);
    in >> a.gpa;
    //ngaysinh
    if(a.birth[1]=='/'){
        a.birth.insert(0, "0");
    }
    if(a.birth[4]=='/'){
        a.birth.insert(3, "0");
    }
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
    return in;
}

ostream& operator << (ostream& out, SinhVien& a){
    out << a.ma << " " << a.name << " " << a.grade << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien*ds,int N) {
    sort(ds, ds + N, cmp);
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