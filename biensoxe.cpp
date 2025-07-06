#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
string solve(string s, string& s2)
{
    int k;
    s = s.substr(5);
    k = s.find(".");
    string s1 = s.substr(0, k);
    s2 = s.substr(k + 1);
    return s1;
}
bool CheckTangChat(string s1, string s2)
{
    if(s1[0] < s1[1] && s1[1] < s1[2])
    {
        if(s2[0] < s2[1]) return true;
    }
    return false;
}
bool CheckBangNhau(string s1, string s2)
{
    if(s1[0] == s1[1] && s1[1] == s1[2])
    {
        if(s2[0] == s2[1]) return true;
    }
    return false;
}
bool Check68(string s1, string s2)
{
    for (int i=0; i<=2; i++)
    {
        if(s1[i] != '6' && s1[i] != '8') return false;
    }
    for (int i=0; i<=1; i++)
    {
        if(s1[i] != '6' && s1[i] != '8') return false;
    }
    return true;
}

int main()
{
    faster();
    int t; 
	cin >> t;
    while(t--)
    {
        string s; 
        cin >> s;
        string s1, s2;
        s1 = solve(s, s2);
        if(CheckBangNhau(s1, s2) || CheckTangChat(s1, s2) || Check68(s1, s2)) cout << "YES\n";
        else cout << "NO\n";
    }
}