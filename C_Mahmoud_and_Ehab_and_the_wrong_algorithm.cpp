#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void binarytree(int n){
    int a[n+1];
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
    for(int i=1;i<n;i++){
        cout<<a[i]<<" "<<a[i+1]<<endl;
    }

}
void listtree(int n){
   
    cout<<1<<" "<<4<<endl;
    cout<<1<<" "<<3<<endl;
    cout<<1<<" "<<2<<endl;
    for(int i=5;i<=n;i++){
        cout<<2<<" "<<i<<endl;
    }
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    if(n<6){
        cout<<-1<<endl;
        binarytree(n);
    }
    else{
        listtree(n);
        binarytree(n);
    }
    // listtree(n);
  

    
}   