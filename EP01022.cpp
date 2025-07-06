#include<bits/stdc++.h>
using namespace std;
int main(){
    long long day;
    cin >> day;
    long long year= day/365;
    long long remainningday= day%365;
    long long weeks= remainningday/7;
    long long day2= remainningday%7;
    cout << year << " " << weeks << " " << day2;
    return 0;
}