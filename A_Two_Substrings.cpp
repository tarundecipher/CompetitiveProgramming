#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    string pat = "ABA";
    string pat2 = "BAB";

    string z1 = pat+'$'+s;
   
    
    int n = z1.length();
    int z11[n],z22[n];
    int p1=0; int p2= 1;
    memset(z11,0,sizeof(z11));
    memset(z22,0,sizeof(z22));
    
    bool cond = false;
    
  
    pat = "AB";
    z1 = pat+'$'+s;
    p1=0; p2=1;
    while(p2<n){
        int j1 = p2;
        while(z1[p1]==z1[j1]){
            p1++; j1++;
        }
        
        z11[p2] = p1;
        p2++;
        p1=0;
    }

   
    pat = "BA";
    z1 = pat+'$'+s;
    p1=0; p2=1;
    while(p2<n){
        int j1 = p2;
        while(z1[p1]==z1[j1]){
            p1++; j1++;
        }
     
        z22[p2] = p1;
        p2++;
        p1=0;
    }
    int ma1 = -1; int ma2 = -1;
    int mi1 = n+2; int mi2 = n+2;

    for(int i=0;i<n;i++){
        if(z11[i]==2){
            ma1 = max(ma1,i);
            mi1 = min(mi1,i);
        }
    }
    for(int i=0;i<n;i++){
        if(z22[i]==2){
             ma2 = max(ma2,i);
            mi2 = min(mi2,i);
        }
    }
    // cout<<ma1<<" "<<mi<<endl;
    if((abs(ma1-mi2)>1 || abs(ma2-mi1)>1)&& ma1!=-1 && mi2!=n+2){
        cond = true;
    }
    if(cond){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    

}   
