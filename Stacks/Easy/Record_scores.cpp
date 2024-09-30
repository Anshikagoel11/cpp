// leetcode 682. Baseball Game
//must try to revise concept 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    string x;
    cin>>m;
    vector<string>operations;
    for(int i=0;i<m;i++){
        cin>>x;
     operations.push_back(x);
    }
    
     stack<int>st;
        int n=operations.size(),sum=0;
        for(int i=0;i<n;i++){
            if(st.size()==0) {
                st.push(stoi(operations[i]));
            }
            else if(operations[i]=="+"){
                int x=st.top(),sum2=0;
                st.pop();
                int y=st.top();
                st.pop();
                 sum2=x+y;
                st.push(y);
                st.push(x);
                st.push(sum2);
            }
            else if(operations[i]=="D"){
                st.push(2*st.top()); 
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            else {
                st.push(stoi(operations[i]));
            }
        }
        while(st.size()>0){
            sum+=st.top();
            st.pop();
        }       
      cout<<sum;
    return 0;
}