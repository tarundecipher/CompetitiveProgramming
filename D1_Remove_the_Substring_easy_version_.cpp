#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool present(string temp,string b){
    if(b.length()>temp.length()){
        return false;
    }
    int p1=0; int p2 = 0;
    while(p1<b.length() && p2<temp.length()){
        if(b[p1]==temp[p2]){
            p1++; p2++;
        }
        else{
            p2++;
        }
    }
    if(p1==b.length()){
        return true;
        
    }
    else{
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string a,b; cin>>a>>b;
    cin>>a; cin>>b;
       int n = a.length();
       int ma = 0;
    for(int l=0;l<n;l++){
        for(int len=1;len<=n-l;len++){
            string temp = a.substr(0,l)+a.substr(l+len,n);
            if(temp.length()>0){
                if(present(temp,b)){
                    ma = max(ma,len);
                }
            }
        }
    }
    cout<<ma<<endl;
        
    

}
