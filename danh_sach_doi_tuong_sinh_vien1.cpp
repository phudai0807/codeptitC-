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
    cin.ignore();
    getline(in, a.name);
    getline(in, a.grade);
    getline(in, a.birth);
    cin >> a.gpa;
    if(a.birth[1]=='/'){
        a.birth.insert(0, "0");
    }
    if(a.birth[4]=='/'){
        a.birth.insert(3, "0");
    }
    return in;
}

ostream& operator << (ostream& out, SinhVien& a){
    out << a.ma << " " << a.name << " " << a.grade << " " << a.birth << " " <<  fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
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