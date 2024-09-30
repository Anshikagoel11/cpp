//Intersection of two SORTED arrays 
//1. brute
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n1,n2;
//     //input
//     cin>>n1>>n2;
//     int a[100],b[100];
//     for(int i=0;i<n1;i++) cin>>a[i];
//     for(int i=0;i<n2;i++) cin>>b[i];
     
//      //logic
//      vector<int>visit={0};
//      vector<int>intersect;
//      for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(a[i]==b[j] && visit[j]==0){
//              intersect.push_back(a[i]);
//              visit[j]=1;
//              break;
//             }
//             if(b[j]>a[i]) break; //sorted hai toh agar b ka elem greater hai means aage ke bhe sare greater hi honge a[i] se koi chota nhi hoga so we can break that loop
//         }
//      }
//     //print
//     for(int i=0;i<intersect.size();i++) cout<<visit[i]<<" ";
//     // TC - O(n1 * n2)
//     // SC - O(min(n1,n2))  jiska bhe size small hoga max utne hi comman elem ho skte h
//     return 0;
// }


//1. optimial
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    //input
    cin>>n1>>n2;
    int a[100],b[100];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
     vector<int>intersect;
     //logic
     int i=0,j=0;
     while(i<n1 && j<n2){
        if(a[i]>b[j]) j++;
        else if(b[j]>a[i]) i++;
        else {  //equal
       intersect.push_back(a[i]);
       i++;
       j++;
        }
     }
     
    //print
    for(int i=0;i<intersect.size();i++)  cout<<intersect[i]<<" ";
    // TC - O(n1 + n2)
    // SC - O(1)  
    return 0;
}