// // sort the array on the basis of frequency [1,1,1,3,5,5,4] --> [1,1,1,5,5,3,4]

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int arr[n];
// unordered_map<int,int>mpp;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
//     mpp[arr[i]]++;
// }
// priority_queue<pair<int,int>>pq;
// for(auto it : mpp){
//     pq.push({it.second , it.first});
// }
// while(pq.size()>0){
//     for(int i=0;i<pq.top().first;i++) cout<<pq.top().second<<" ";
//     pq.pop();
// }
//     return 0;
// }



#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[16]={1,2,3,4,3,1,6,1,13,10,3,3,11,10};
   map<int,int>mpp;
   for(int i=0;i<16;i++){
   mpp.insert({arr[i],mpp[arr[i]]++});
   }
priority_queue<pair<int,int>>maxh;
for(auto it:mpp){
    maxh.push({it.second,it.first});
}

cout<<"Element:"<<maxh.top().second<<endl<<"Freq:"<<maxh.top().first;
    return 0;
 }