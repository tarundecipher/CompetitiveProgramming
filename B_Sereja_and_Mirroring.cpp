#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   
        int n,m; cin>>n>>m;
        
        string b[n];
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<m;j++){
                int temp2; cin>>temp2;
                if(temp2==0){
                    temp += "0";
                }
                else{
                    temp+="1";
                }
            }
            b[i] = temp;
        }


        if(n%2!=0){
            cout<<n<<endl;
        }
        else{
            bool cond = false; int ans=n;
            while(n%2==0){
                n = n/2;
                for(int i=0;i<n;i++){
                    if(b[i]==b[2*n-i-1]){
                        continue;
                    }
                    else{
                        cond = true;
                        break;
                    }
                }
                if(cond==true){
                    break;
                }
                else{
                    ans = n;
                }
            }
           
            cout<<ans<<endl;
            

        }
        


    
}   