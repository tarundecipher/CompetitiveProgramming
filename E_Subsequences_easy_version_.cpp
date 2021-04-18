#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
       ll n,k; cin>>n>>k;
       string s; cin>>s;
       queue<string> st;
       st.push(s);
       ll res = 0;
       ll siz=0;
        map<string,ll> mp;
        mp[s]++;
       while(!st.empty()){

           string temp = st.front();
           st.pop();
           res+=temp.length();
           siz+=1;
           if(siz==k){
               break;
           }
      
           for(ll i=0;i<temp.length();i++){
               string temp2  = temp;
               temp2.erase(temp2.begin()+i);
               if(!mp[temp2] ){
                // cout<<temp2<<endl;
                st.push(temp2);
                mp[temp2]++;
               }
           }

          



       }
       
       if(siz==k){
       
        cout<<n*k-res<<endl;
       }
       else{
           cout<<-1<<endl;
       }


       

    
    
}
