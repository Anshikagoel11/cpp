// #leetcode1441-You are given an integer array target and an integer n.
// You have an empty stack with the two following operations:
// "Push": pushes an integer to the top of the stack.
// "Pop": removes the integer on the top of the stack.
// You also have a stream of the integers in the range [1, n].
// Use the two stack operations to make the numbers in the stack (from the bottom to the top) equal to target. You should follow the following rules:
// If the stream of the integers is not empty, pick the next integer from the stream and push it to the top of the stack.
// If the stack is not empty, pop the integer at the top of the stack.
// If, at any moment, the elements in the stack (from the bottom to the top) are equal to target, do not read new integers from the stream and do not do more operations on the stack.
// Return the stack operations needed to build target following the mentioned rules. If there are multiple valid answers, return any of them.
// Example 1:
// Input: target = [1,3], n = 3
// Output: ["Push","Push","Pop","Push"]
// Explanation: Initially the stack s is empty. The last element is the top of the stack.
// Read 1 from the stream and push it to the stack. s = [1].
// Read 2 from the stream and push it to the stack. s = [1,2].
// Pop the integer on the top of the stack. s = [1].
// Read 3 from the stream and push it to the stack. s = [1,3].
// Example 2:
// Input: target = [1,2,3], n = 3
// Output: ["Push","Push","Push"]
// Explanation: Initially the stack s is empty. The last element is the top of the stack.
// Read 1 from the stream and push it to the stack. s = [1].
// Read 2 from the stream and push it to the stack. s = [1,2].
// Read 3 from the stream and push it to the stack. s = [1,2,3].



// class Solution {
// public:
//     vector<string> buildArray(vector<int>& target, int n) {
//      int count=0;
//      unordered_map<int,int>mpp;
//      vector<string>v;
//      stack<int>st;
//      for(int i=0;i<target.size();i++){
//         mpp[target[i]]++;  
//      }  
    
//      for(int i=1;i<=n;i++){ // yha i ko 1 se start isleye keya kyuki given stream of interger 1 to n hai (vhi hume compare krne hai)
//          if(count==target.size()){
//         return v;
//      } 
//      if (st.size() >= 0 && mpp[i] == 0) // means stack ka size kuch bhe ho agar number i jiske leye hum dekh rhe hai vo agar m[i]>0 (means array me exist) nhi krte toh usse push krke pop hi krdo
//     {
//         st.push(i);
//         v.push_back("Push");
//         st.pop();
//         v.push_back("Pop");
//     }
//     else{
//         st.push(i);
//        v.push_back("Push");
//        count++;  //  yha v me vo number add hua jo given array me exist krta hai (since yha condition apply ki hai that is mpp[i]>0 toh tabhi count+1 karaya means same array ka jesa 1 elem toh stack me aa gya ) toh aese hi jab count=size of array hoga toh that means sare elem array jese stack me aa chuke hai toh return honge  ....yeh count wlaa idea tune khud hi socha tha ....(after trying and thinking in many differnet ways)...........thankyou god!!
//     }
  
// }
//  return v;     
     
//     }
// }; 

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
     stack<char>ss;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#') ss.pop();
            else if(s[i]!='#') ss.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#') st.pop();
            else if(t[i]!='#') st.push(t[i]);
        }
       
        while(ss.size()>0 && st.size()>0 && ss.top()==st.top() ){
            ss.pop();
            st.pop();
        }
        if(ss.size()==0 && st.size()==0) cout<<"true";
        else cout<<"false";

    return 0;
}
    
