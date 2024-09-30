// maximise the Top elem by performing exactaly k steps .
// You are given a stack of N integers. In one operation, you can either pop an element from the stack or push any popped element into the stack. You need to maximize the top element of the stack after performing exactly K operations. If the stack becomes empty after performing K operations and there is no other way for the stack to be non-empty, print -1.
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(0);
  
    cout<<st.top();
      st.pop();
    return 0;
}