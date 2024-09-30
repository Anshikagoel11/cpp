// we have to sort an stack such that greatest elem will at top so FIRSTLY we push all elem of stack in priority_queue(vector<int>,greater<int>) wale since it store elem acc to their priorty such that smallest elem will at top and then we push all elem of queue in stack (jisse queue ka last elm(largest) stack me top pe aayaga)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
   priority_queue<int,vector<int>,greater<int>>p;
   while(!s.empty()){
      p.push(s.top());
       s.pop();
   }
   
   while(!p.empty()){
       s.push(p.top());
       p.pop();
   }
   
   while(s.size()>0){
    cout<<s.top()<<" ";
    s.pop();
   }
    return 0;
}