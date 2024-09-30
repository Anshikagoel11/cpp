 // 1. second largest elem in array
 //2. fabicinni series using array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // int arr[n];  //bad habit
//     int arr[1000];   // give large size
//     for(int i=0;i<n;i++) cin>>arr[i];
//      int max = INT_MIN;
//      for(int i=0;i<n;i++){
//         if(arr[i]>max) {
//             max=arr[i]; //max elem of array
//         }
//      }
        // for sec max
//      int sec_max=INT_MIN;
//      for(int i=0;i<n;i++){
//         if(sec_max<arr[i] && arr[i]!=max){  //second max
//             sec_max=arr[i];
//         }
//         //or
//         // if(arr[i]!=max){
//         //     sec_max=max(sec_max,arr[i]);
//         // }
//      }
//      cout<<"MAX:"<<max<<endl<<"SEC-MAX:"<<sec_max;
//     return 0;
// }


//************************2. fabacinni series using array********************* */

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;  //upto which nth fabinnci number we have to cal
cin>>n;
int arr[1000];
arr[0]=0;
arr[1]=1;
for(int i=2;i<n;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
//print
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}