// calculate the index of peak elem

//Elem considered to be peak if it is greater then its ajecent element and no other elem is greater than that 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,index;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
       int elem = *max_element(arr,arr+n);  // so  here i find max elem so that there will be one other elem greater than that
       for(int i=0;i<n;i++){
        if(arr[i]==elem){ 
        index=i;   //for index of that elem 
        cout<<i<<endl;
          break;
        }
       }
     
    return 0;
}