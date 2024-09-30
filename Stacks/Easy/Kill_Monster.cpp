// #hackerearth
// Problem:-
// Given an array monster denoting strengths of N monsters, we start with an empty battlefield, at each minute i, ith the monster joins the battlefield and kills all monsters whose strength is less than or equal to his strength.

// input -3 0 3 4 1  , ouput - 1 2 1 1 2

//explaination-
// At 0th minute, the first monster joins the battlefield. There are no monsters already on the battlefield. After 0th minute, the alive monsters are [3].
// At 1st minute, the second monster joins the battlefield. The alive monsters are [3], but no one's strength is less than or equal to 0, no one gets killed and 0 becomes part of battlefield, The alive monsters now are[3,0].


#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t; //test cases
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int mon[n];
		for(int i=0;i<n;i++){
			cin>>mon[i];
		}
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()<=mon[i]){
                st.pop();
            }
            st.push(mon[i]);
            cout<<st.size()<<" ";
        }
        
        }
	return 0;
    }