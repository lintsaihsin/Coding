#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}   
int main() {
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2]&&a[0]*a[1]*a[2]!=0){
        sort(a,a+3,cmp);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            cout<<"right\n";
        }
        else
            cout<<"wrong\n";
    }
    return 0;
}