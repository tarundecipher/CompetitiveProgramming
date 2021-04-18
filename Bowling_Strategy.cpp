#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
    int t; cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        if(k*l<n || (k==1 && n>1)){
            cout<<-1<<endl;
        }
        else{
            int ct = n; bool cond = false;
            while(true){
                for(int j=1;j<=k ;j++){
                    if(ct>0){
                    cout<<j<<" ";
                    ct--;
                    }
                    else{
                        cond = true;
                        break;

                    }

                }
                if(cond==true){
                    break;
                }
            }
            cout<<endl;
        }
    }
}   