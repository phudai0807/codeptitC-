#include<fstream>
#include<iostream>
using namespace std;
struct Employees{
    string ID;
    string name;
    string salary;
    int hs;
    int lcb;
    int pc;
};
void nhap(Employees &a){
    getline(cin, a.ID);
    getline(cin, a.name);
    getline(cin, a.salary);
    cin >> a.hs >> a.lcb >> a.pc;
}

int main(){
    fstream file("D:\\test.txt", ios::in);
    
}