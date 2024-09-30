//1614. Maximum Nesting Depth of the Parentheses
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    int open=0,close=0;
    unordered_set<int>v; // uses set kyuki agar brackets me bich me bhot sare characters honge like (a/b+u-g+d*y-g*a) so inhe sbhi character(a,+,/,b,-,g,+,d,*,y,-,g....) ke leye(open-close) means depth same hogi toh bar bar vector me same value jaaate rhege (sayad jisse leetcode pe runtime error bhe aa rha h) but set se yeh nhi hoga kyuki set stores only unique values(so repeated value ek hi baar jyegi)
   //......showing SVG error on using unordered set on leetcode (that's why not understand,confused).......//
    for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]==')') {
        st.push(s[i]);
    }
    
        while(st.size()>0){
            if(st.top()=='(') {
                open++;
            }
            else if(st.top()==')') {
                close++;
            }
            st.pop();
        }
        int x=open-close; 
        v.insert(x);
    
    }
    int ans = *max_element(v.begin(),v.end());
    cout<<ans;
    return 0;
}

// cpp
// class Solution {
// public:
//     int maxDepth(string s) {
//         int num=0,ans=-1;

//         for(int i=0;i<s.size();i++){
//             if(s[i]=='(')num++;
//             else if(s[i]==')')num--;

//             ans=max(ans,num);
//         }

//         return ans;
//     }
// };