#include<bits/stdc++.h>

int coun=0;
using namespace std;

class GiangVien{
    private:
        string name;
    public:
        string ma, subject;
        friend istream& operator>>(istream& in, GiangVien& a);
	    friend ostream& operator<<(ostream& out, GiangVien& a);
};

istream& operator >> (istream& in, GiangVien& a){
    coun++;
    a.ma = "GV" + string(2 - to_string(coun).length(), '0') + to_string(coun);
    getline(in>>ws, a.name);
    getline(in>>ws, a.subject);
    //subject
    string res="";
    stringstream ss(a.subject);
    string token;
    while(ss>>token){
        res+=toupper(token[0]);
    }
    a.subject=res;
    return in;
}

ostream& operator << (ostream& out, GiangVien& a){
    out << a.ma << " " << a.name << " " << a.subject << endl;
    return out;
}

int main(){
    GiangVien ds[100];
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        cin >> ds[i];
    }
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string res="";
        stringstream ss(s);
        string token;
        while(ss>>token){
            res+=toupper(token[0]);
        }
        s=res;
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
        for(int i=0; i<n; i++){
            if(s == ds[i].subject){
                cout << ds[i];
            }
        }
    }
    return 0;
}