#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;

   while(t--){
    
    string s;
    cin>>s;
    int curr=0; 
    int n = s.length();
    int sum[n];
    if(s[0]=='+'){
        sum[0] =1;
        curr++;
    }
    else{
        sum[0]=-1;
        curr--;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='+'){
            curr++;
            sum[i] = sum[i-1]+1;
        }
        else{
            curr--;
            sum[i] = sum[i-1]-1;
        }


    }

    int res =0;
    if(curr<0){
    curr = abs(curr);
    for(int i=0;i<curr;i++){
        for(int j=0;j<n;j++){
            if(i+sum[j]<0){
                
                res+=j+1;
                break;
            }
        }
    }

    res+=n;
    cout<<res<<endl;
    }
    else{
        cout<<n<<endl;
    }
   
   }
   
}
