#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void push(queue<int> &q1,queue <int> &q2,int t){

    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(t);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}
 

int main(){
   int a[] = {1,2,3,4,5};
   queue <int> q1,q2;

   for(int i=0;i<5;i++){
       push(q1,q2,a[i]);
   }
   while(!q1.empty()){
       cout<<q1.front()<<endl;
       q1.pop();
   }


}

