// //1. brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     //input
//     for(int i=0;i<n;i++) cin>>arr[i];

//      vector<int>temp;
//      for(int i=0;i<n;i++){
//      if(arr[i]!=0) temp.push_back(arr[i]);   //O(n)
//      }
//      for(int i=0;i<temp.size();i++) {
//         arr[i]=temp[i];    //O(x)  , x : no. of non-zero elem
//      }
//      for(int i=temp.size();i<n;i++){
//         arr[i]=0;  //O(n-x)
//      }
    
//      //TC = O(n)+O(x)+O(n-x)  => O(2n)
//      //SC = O(N) in worst case when there is no zero in the array


//      //print
//      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }

//---------------------------------------------------------------

//2. optimize code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    //input
    for(int i=0;i<n;i++) cin>>arr[i];

     //code
     int j=-1;
     for(int i=0;i<n;i++){  //O(x) where x: number till first zero elem occurs
        if(arr[i]==0){ 
             j=i;    //index of first zero element 
            break;
        }
     }
       for(int i=j+1;i<n;i++){   //O(n-x)
        if(arr[i]!=0){      // now i ko j ke aage se traverse krnege till end and during traversing if any elem!=0 then ww will swap it with the arr[j]
            swap(arr[j],arr[i]);
            j++;
        }
        
     }
     //TC - O(x)+O(n-x) => O(n);
        //SC- O(1)
     
     //print
     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}