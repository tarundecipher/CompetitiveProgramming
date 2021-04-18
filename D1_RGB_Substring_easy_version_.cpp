#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int zalgo(string pat,string txt,int z[]){
    string temp = pat+'$'+txt;
    int n = temp.length();
    int n1 = pat.length();
    int p1 = 0; int p2 = n1;
    int ma = INT_MIN;
    while(p2+n1<=n){
        int j = p2;
        int c = 0;
        while(j<=p2+n1){
            if(temp[j]== temp[p1]){
                c++;
                
            }
            else{
                break;
            }
                  j++; p1++;
     
        }
        z[p2] = c;
        p2++;
        if(p1>=n1-1){
        p1=0;   
        }
        ma = max(ma,c);

    }
    return ma;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        string pat1 = "",pat2 = "",pat3 ="";
        string p1 ="RGB";string p2 = "BRG"; string p3 = "GBR";
        for(int i=0;pat1.length()<=k+10;i++){
            pat1+= p1;
        }
        for(int i=0;pat2.length()<=k+10;i++){
            pat2+= p2;
        }
        for(int i=0;pat3.length()<=k+10;i++){
            pat3+= p3;
        }
        
        pat1 = pat1.substr(0,k);
        pat2 = pat2.substr(0,k);
        pat3 = pat3.substr(0,k);
        // cout<<pat1<<endl;
        int z1[k+n+1];
        memset(z1,0,sizeof(z1));
        int z2[k+n+1];
        memset(z2,0,sizeof(z2));
        int z3[k+n+1];
        memset(z3,0,sizeof(z3));
        int ma = INT_MIN;
        ma = max(ma,zalgo(pat1,s,z1));
        ma = max(ma,zalgo(pat2,s,z2));
        ma = max(ma,zalgo(pat3,s,z3));
        
        

      
        cout<<k-ma<<endl;


    }
    
    
}   
