// You are given a string s, which contains stars *.
// In one operation, you can:
// Choose a star in s.
// Remove the closest non-star character to its left, as well as remove the star itself.
// Return the string after all stars have been removed.
// Input: s = "leet**cod*e"
// Output: "lecoe"
// Explanation: Performing the removals from left to right:
// - The closest character to the 1st star is 't' in "leet**cod*e". s becomes "lee*cod*e".
// - The closest character to the 2nd star is 'e' in "lee*cod*e". s becomes "lecod*e".
// - The closest character to the 3rd star is 'd' in "lecod*e". s becomes "lecoe".
// There are no more stars, so we return "lecoe".

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
       stack<int>st1;
       stack<int>st2;
        string res;
        for(int i=0;i<s.size();i++){
             if(st1.size()>0 && s[i]=='*'){
                    st1.pop();
                
                if(st1.size()==0);
            }
            else st1.push(s[i]);
        }
        if(st1.size()==0) cout<<" ";
       else{ while(st1.size()>0){
            st2.push(st1.top());
            st1.pop();
        }
    //    for(int i=0;i<res.size()/2;i++){    //reverseing a string is increasing TC so uses one extra stack to store and then add into string
    //      char temp=res[i];
    //      res[i]=res[res.size()-1-i];
    //      res[res.size()-1-i]=temp;
    //    }
    
         while(st2.size()>0){
            res+=st2.top();
            st2.pop();
         }
        cout<< res;
       }
    return 0;
}