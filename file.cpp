#include<fstream>
#include<iostream>
using namespace std;
int main(){
    //B1. Open file
    fstream file("D:\\test.txt", ios::in);
    if(!file){
        cout << "Khong mo duoc tep";
        return 0;
    }
    //B2. Read data from file
    char output;
    while(file>>output){
        cout << output;
    }
    //B3. Close file
    file.close();
    return 0;
}