//https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>> n >>h;
    int a;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>> a;
        if(a>h){
            ans+=2;
        }
        else{
            ans++;
        }
    }
    cout<< ans;
}