//after removing duplicate element baad ke elements kuch bhe ho no farak
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];
    // BRUTE APPROACH
    //  set<int>s;
    //  for(int i=0;i<n;i++) {
    //  s.insert(arr[i]);      //set insert fnc have TC of - 'logn'
    //  }   //nlogn
    //  int j=0;
    //  for(auto it:s){
    //     arr[j]=it;
    //     j++;
    //  }       //n
     // TC - nlogn+n;  SC - O(n); //extra set space has been used 
      

      
      //OPTIMIZE SOLN-
      int j=0; 
   for(int i=1;i<n;i++){   // or  for(int i=j+1;i<n;i++){
    if(arr[j]!=arr[i]){
     arr[j+1]=arr[i];
    j++;
   }
   else continue;
   }     // TC - O(n)
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}