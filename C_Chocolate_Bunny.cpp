#include <iostream>
#include <bits/stdc++.h>

using namespace std;


//1 3 2

int main(){
   
       int n; cin>>n;
       int arr[n]; int prev=0; bool visited[n]; memset(visited,false,sizeof(visited));
       for(int i=1;i<n;i++){
           cout<<"? "<<prev+1<<" "<<i+1<<endl; cout.flush();
           int t1; cin>>t1; 
           cout<<"? "<<i+1<<" "<<prev+1<<endl; cout.flush();
           int t2; cin>>t2;
           if(t1<t2){
               arr[i] = t2;
               prev = prev;
               visited[t2-1]  =true;
           }
         
           if(t2<t1){
              
               arr[prev] = t1;
               prev = i;
               visited[t1-1] = true;
           }
           
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                arr[prev] = i+1;
                break;
            }

        }
       cout<<"!"<<" "; 
        for(auto i:arr){
            cout<<i<<" ";
        }       cout.flush();
   
}

