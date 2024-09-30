//  print unique strings in lexographical order -->
// /approach-- since have to print in lexographical order the we have main two conatiners are there -
// 1.maps,unordered_map --> but maps stores 'key ,value' and here we dont have any other data so that we can work on 'values of map' ....exp  -if here also want frequency then map will be the best or we additional use frequency but it will not good.
// 2.sets,unordered_set---> ask in lexographical order for unordered_set not will , only sets work


#include<bits/stdc++.h>
using namespace std;
// int main(){
//     set<string>str;
//     int n; //no. of strings
//     cin>>n;
//   for (int i=0;i<n;i++){
//     string s;
//    cin>>s;
//      str.insert(s);
//   }
//   // since sets and maps does store acc to index they are values randomy anywhere in the box in memory so cannot use for(int i=0;i<n...) loop
//   // can use iterator

//   for(auto it:str ){
//     cout<< it<<" ";
//   }
//   // or 
// //   for(auto it=str.begin(); it!=str.end() ; it++){
// //     cout<< *it<<" ";
// //   }
//     return 0;
// }

//now user give a value two times set will cout(print) it only once since it set stores uniquely



// ---------------------------------------problem2------------------------------
//   given S strings and Q queries , for each query you have given an string , print YES if string is present else NO
//  explain---
//  means S strings hai and Q queries(ques) aur in each query ek  string given hai so hum yes print karna hai agar vo string  present hai , else NO


 int main(){
 unordered_set<string>str;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
  string s;
  cin>>s;
  str.insert(s);  //all strings stored uniquely but not in order
 }
 int q;
 cin>>q;
 while(q--){
  string qs;
  cin>>qs;
  auto it = str.find(qs);
  if(it==str.end()) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
 }
  return 0;
 }