// Given a string s of lower and upper case English letters.
// A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:
// 0 <= i <= s.length - 2
// s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
// To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.
// Return the string after making it good. The answer is guaranteed to be unique under the given constraints.
// Notice that an empty string is also good.
// Example 1:
// Input: s = "leEeetcode"
// Output: "leetcode"
// Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".

//beates 100% - happy (think the apprach without any help )

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    vector<char>ans;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        // if (st.size() == 0)
        //     st.push(s[i]);
        // else if (st.size() > 0 && (st.top() - s[i] == 32 || st.top() - s[i] == -32)){
        //    st.pop();         
        //     }
        // else if (st.size() > 0 && st.top() != s[i])
        //     st.push(s[i]);
        //     else if (st.size() > 0 && st.top() == s[i])
        //     st.push(s[i]);
    //OR
         if (st.size() > 0 && (st.top() - s[i] == 32 || st.top() - s[i] == -32)){
           st.pop();         
            }
        else  st.push(s[i]);
    }
    
    if(st.size()==0) cout<<" ";

    while(st.size()>0){
        ans.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}


// class Solution {
// public:
//     string makeGood(string s) {
//         stack<char> st;
//         for (auto& ch : s) {
//             if (!st.empty() && ch != st.top() &&
//                 (toupper(ch) == st.top() || ch == toupper(st.top())))
//                 st.pop();
//             else
//                 st.push(ch);
//         }
//         string output = "";
//         while (!st.empty()) {
//             output = st.top() + output;
//             st.pop();
//         }
//         return output;
//     }