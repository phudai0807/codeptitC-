#include<bits/stdc++.h>

using namespace std;

bool x = false;
void sinh(int* M, int n){
    int i=n-2;
    while(i>0 && M[i]<M[i+1]){
        i--;
    }
    if(i<0){
        x=true;
    }
    else{
        
    }
}