#include <bits/stdc++.h>
#define ll long long int
using namespace std;


struct node{
    int val =-1;
};
int check(string t,string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            c++;
        }
    }
    return c;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    string s,t; cin>>s>>t;
    map<char,node> mp; int i1=-1,j1=-1;
  
     int m = check(t,s);
     int ma = m;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
          
            if(mp[s[i]].val!=-1){
              
                char temp = t[mp[s[i]].val];
                t[mp[s[i]].val] = t[i];
                t[i] = temp;
                int m1 = ma;

                if(t[i]==s[i]){
                    m1--;
                }
                if(t[mp[s[i]].val]==s[mp[s[i]].val]){
                    m1--;
                }
               
                if(m1<m){
                    m = m1;
                     i1 = mp[s[i]].val;
                     j1 = i;
                }
                temp = t[mp[s[i]].val];
                t[mp[s[i]].val] = t[i];
                t[i] = temp;
                  

            }
             mp[t[i]].val = i;
           
        }
      
        
    }
    mp.clear();
     for(int i=n-1;i>=0;i--){
        if(s[i]!=t[i]){
          
            if(mp[s[i]].val!=-1){
              
                char temp = t[mp[s[i]].val];
                t[mp[s[i]].val] = t[i];
                t[i] = temp;
                int m1 = ma;

                if(t[i]==s[i]){
                    m1--;
                }
                if(t[mp[s[i]].val]==s[mp[s[i]].val]){
                    m1--;
                }
               
                if(m1<m){
                    m = m1;
                     i1 = mp[s[i]].val;
                     j1 = i;
                }
                temp = t[mp[s[i]].val];
                t[mp[s[i]].val] = t[i];
                t[i] = temp;
                  

            }
             mp[t[i]].val = i;
           
        }
      
        
    }

    cout<<m<<endl;
    if(i1!=-1){
    cout<<i1+1<<" "<<j1+1<<endl;
    }
    else{
        cout<<-1<<" "<<-1<<endl;
    }
   


    

}   
