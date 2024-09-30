// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
// Example 1:
// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
      stack<char>st;
        string res;
        for(int i=0;i<s.size();i++){
            if(st.size()==0) st.push(s[i]);
            else if (st.size()>0 && s[i]!=st.top()) st.push(s[i]);
            else if (st.size()>0 && s[i]==st.top()){
                    st.pop();               
            }
        }
        while(st.size()>0){
            res+=st.top();
            cout<<res<<" ";
            st.pop();
        }
        
        for(int i=0;i<res.size()/2;i++){
            swap(res[i],res[res.size()-1-i]);
        }
        cout<< res;
    return 0;
}