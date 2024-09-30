//if elem is present return its index else -1;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];  
   //M1. using extra array temp
//    int temp[100]; 
//    for(int i=1;i<n;i++){
//     temp[i]=arr[i-1];
//    }
//    temp[0]=arr[n-1];
//    for(int i=0;i<n;i++){
//     arr[i]=temp[i];
//    }

// TC- O(2N)  1st loop for temp then 2nd for again putting temp elem in the original 
// SC - O(N)  extra array use of N size
   //end 

   //m2. By storing the last elem of arr in a last variable;

   int last = arr[n-1];
   for(int i=n-2;i>=0;i--){
    arr[i+1]=arr[i];
   }
   arr[0]=last;

      for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   //TC - O(N);
   //SC - O(1) since no extra spacing we are using
    return 0;
}