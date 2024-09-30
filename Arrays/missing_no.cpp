// //1.brute force 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     //code
//     for(int i=1;i<=n;i++){
//         int flag=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==i){
//             flag=1;
//             } 
//         }
//         if(flag==0){
//               cout<<i;
//               break;    
 //                  }
//     }
//     //TC - O(n^2) 
//     // SC - O(1)
//     return 0;
// }



// //2.better - using hash map
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,maxi=0;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     //code
//     maxi=arr[0];
//     for(int i=0;i<n;i++){
//        maxi=max(maxi,arr[i]);  //O(n)
//     }
//     int m=maxi+1;
//     int hash[100]={0};  //hash[m] but here showing error , dont know why
//     for(int i=0;i<n;i++){
//         hash[arr[i]]=1;  //O(n)
//     }
//     for(int i=1;i<=n;i++){   //O(n)
//         if(hash[i]==0){
//             cout<<i;
//             break;
//         }
//     }
//     //TC - O(3n) 
//     // SC - O(m) m:max elem in array
//     return 0;
// }



//3.optimal - using sum or XOR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //size of array
    cin>>n;
    int m;
    cin>>m; //upto which elem we have see
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];
    //code
    int sum=0,sumNatural=0;
   sumNatural=(m*(m+1))/2;
   for(int i=0;i<n;i++){  //O(n)
    sum+=arr[i];
   }
   int ans = sumNatural-sum;
    cout<<ans;
    //TC - O(n) 
    // SC - O(1)
    return 0;
}