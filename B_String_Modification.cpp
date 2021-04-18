#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string revers(string s,int k){
    int n= s.length();
    string temp = "";
    temp+=s.substr(k,n);

    if(k%2==n%2){
        temp+=s.substr(0,k);
    }
    else{
        string tmp2 = s.substr(0,k);
        reverse(tmp2.begin(),tmp2.end());
        temp+=tmp2;

}    
 return temp;

}




int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    string s; cin>>s;
    string temp;
    string ans = s;
    int k=1;
  
    vector <int> v;
   
    for(int i=1;i<n;i++){
        temp = s;
        temp = revers(temp,i);
        
        if(temp<ans){
            ans = temp;
            k = i+1;
        }

    }
    cout<<ans<<endl;
    cout<<k<<endl;
    
}   
}