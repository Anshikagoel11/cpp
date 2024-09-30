//leetcode 2053- A distinct string is a string that is present only once in an array.
// Given an array of strings arr, and an integer k, return the kth distinct string present in arr. If there are fewer than k distinct strings, return an empty string "".
// Note that the strings are considered in the order in which they appear in the array.
// Example 1:
// Input: arr = ["d","b","c","b","c","a"], k = 2
// Output: "a"
// Explanation:
// The only distinct strings in arr are "d" and "a".
// "d" appears 1st, so it is the 1st distinct string.
// "a" appears 2nd, so it is the 2nd distinct string.
// Since k == 2, "a" is returned.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,k;
    cin>>n>>k;
      string s;
      vector<string>v;
      vector<string>res;
     map<string,int>mpp;
     for(int i=0;i<n;i++){
      cin>>s;
      v.push_back(s);
      mpp[s]++;
     }
    for(int i=0;i<n;i++){
        if(mpp[v[i]]==1){
            res.push_back(v[i]);
            count++;
        }
    }
    if(k>count) cout<<" ";
    else {
        cout<<res[k-1];
    }
    return 0;
}