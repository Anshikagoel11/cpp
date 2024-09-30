//  #leetcode 402
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k, count = 0, i = 0;
    cin >> s >> k;
    stack<int> st;
    stack<int> st2;
    string ans;
    while (count <= k)
    {
        if (st.size() > 0 && st.top() < s[i])
        {
            count++;
        }
        else
            st.push(s[i]);
        i++;
    }
    while(st.size()>0){
        st2.push(st.top());
        st.pop();
    }  
    while(st2.size()>0){
        ans+=st2.top();
        st2.pop();
    }   
    cout<<ans;
    return 0;
}
