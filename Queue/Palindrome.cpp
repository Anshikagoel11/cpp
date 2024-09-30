#include <bits/stdc++.h>
using namespace std;
int main() { 
    string s;
    cin>>s;
    stack<char>st;
    queue<char>que;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
        que.push(s[i]);
    } 
    while((st.top()==que.front())  && (!st.empty()) && (!que.empty())){
        st.pop();
        que.pop();
    } 
    if(st.empty() && que.empty()){
    cout<<"The word"<<" "<<s<<" "<<"is a palindrome";
    }
    else    cout<<"The word"<<" "<<s<<" "<<"is NOT a palindrome";
    return 0;
}
