#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    string s; cin>>s;
    int a[n];
    int a0 = 0;
    int a1 = 0;
    bool cond = false;
    int level =0;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        if(s[i]=='(' && level%2==0){
            a[i] = 0;
            a0++;
            level++;
        
        }
        else if(s[i]=='(' && level%2!=0){
            a[i] =1;
            a1++;
            level++;

        }
        else if(a1>0 && level%2!=0){
            a[i] = 1;
            a1--;
            level--;
        }
        else if(a0>0 && level%2==0){
            a[i] =0;
            a0--;
            level--;
        }


    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }cout<<endl;

}   
