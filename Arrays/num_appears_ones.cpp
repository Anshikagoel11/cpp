//number that appears once and others appears twice

// //1.brute 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; //size of array
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     //code
//     int count=0;
//    for(int i=0;i<n;i++){
//     count=0;
//     for(int j=0;j<n;j++){
//      if(arr[i]==arr[j]) count++;
//     }
//     if(count==1){
//         cout<<arr[i];
//         break;
//     }
//    }
//     //TC - O(n^2) 
//     // SC - O(1)
//     return 0;
// }



// //2.better- by hash map 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; //size of array
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++) cin>>arr[i];
//     //code
//     int maxi=arr[0];    
//     for(int i=0;i<n;i++){  //O(n)
//      maxi=max(arr[i],maxi);
//     }
//     int m=maxi+1;
//     int hash[100]={0};  
//     for(int i=0;i<n;i++){   //O(n)
//         hash[arr[i]]++;
//     }
//      for(int i=0;i<n;i++){
//         if(hash[arr[i]]==1){  //O(n)
//             cout<<arr[i];
//             break;
//         }
//     }
//     //TC - O(3n) 
//     // SC - O(m)  m : maxelem in array
//     return 0;
// }

// if numbers are large than we have to use map 
// TC-O(n logN)+O(n/2+1)   nlogN -to put elem into map , n/2+1 - to search the value==1
//SC- O(n/2+1)   n-size of array , N-size of map
//since the all elem is occuring twice in an array except one that means map store n/2+1 value so that means its the size of the map

//if ordered map is used - then n logN
//if unordered map -then O(n) but when the input is large then use ordered map 



//3.optimal - XOR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //size of array
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];
    //code
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];  
    }
    cout<<xorr;
    //TC - O(n) 
    // SC - O(1)  
    return 0;
}