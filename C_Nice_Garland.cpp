#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
        int n; cin>>n;
        string s;cin>>s;
        
            string temp1,temp2,temp3,temp4,temp5,temp6;
            string pat1 = "RGB"; string pat2 = "RBG";
            string pat3 = "BRG"; string pat4 = "BGR";
            string pat5 = "GRB"; string pat6 = "GBR";
            for(int i=0;i<n;i++){
                temp1+=pat1;
            }
            for(int i=0;i<n;i++){
                temp2+=pat2;
            }
            for(int i=0;i<n;i++){
                temp3+=pat3;
            }
            for(int i=0;i<n;i++){
                temp4+=pat4;
            }
            for(int i=0;i<n;i++){
                temp5+=pat5;
            }
            for(int i=0;i<n;i++){
                temp6+=pat6;
            }
            temp1 = temp1.substr(0,n);
            temp2 = temp2.substr(0,n);
            temp3 = temp3.substr(0,n);
            temp4 = temp4.substr(0,n);
            temp5 = temp5.substr(0,n);
            temp6 = temp6.substr(0,n);
            int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
            for(int i=0;i<n;i++){
                if(temp1[i]!=s[i]){
                    c1++;
                }
                if(temp2[i]!=s[i]){
                    c2++;
                }
                if(temp3[i]!=s[i]){
                    c3++;
                }
                if(temp4[i]!=s[i]){
                    c4++;
                }
                 if(temp5[i]!=s[i]){
                    c5++;
                }
                 if(temp6[i]!=s[i]){
                    c6++;
                }
            }
            int res =min(c1,min(c2,min(c3,min(c4,min(c5,c6)))));
            cout<<res<<endl;
            if(res==c1){
                    cout<<temp1<<endl;
            }
            else if(res==c2){
                cout<<temp2<<endl;
            }
            else if(res==c3){
                cout<<temp3<<endl;
            }
            else if(res==c4){
                cout<<temp4<<endl;
            }
            else if(res==c5){
                cout<<temp5<<endl;
            }
            else if(res==c6){
                cout<<temp6<<endl;
            }
            
           
        
      
        
        
    
    
    
}   
