// union of two sorted arrays

//1. brute approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     //input
//     int n1,n2;
//     cin>>n1>>n2;
//     int a[100] , b[100];
//     for(int i=0;i<n1;i++) cin>>a[i];
//     for(int i=0;i<n2;i++) cin>>b[i];
//     //code
//     set<int>s;
//     for(int i=0;i<n1;i++) s.insert(a[i]);  // O(n1 logn) n: size of set
//     for(int i=0;i<n2;i++) s.insert(b[i]);  // O(n2 logn) 

//     vector<int>unionArr;
//     for(auto it:s){
//         unionArr.push_back(it);    // O(n1+n2)
//     }
//     //print
//     for(int i=0;i<s.size();i++) cout<<unionArr[i]<<" ";


//     // TC - O(n1 logn) + O(n2 logn) + O(n1+n2)
//     // SC - O(n1+n2) + O(n1+n2) for set and unionArr resp but please mention to the interviewer that the space of O(n1+n2) of unionArr is using to return the answer not for our code solution 
//     return 0;
// }

//2.optimize


#include<bits/stdc++.h>
using namespace std;
int main(){
    //input
    int n1,n2;
    cin>>n1>>n2;
    int a[100] , b[100];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    //code
    
    return 0;
}
