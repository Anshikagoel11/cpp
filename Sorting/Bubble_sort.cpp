//Bubble  sort - find max and swap with adject elem

#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[],int n){
for(int i=0 ; i<n-1 ; i++){  // or for(int i=n-1;i>0;i--) and for(int j=0;j<=i-1;j++)
int didswap=0;  // for best time complexicity -> o(n)
 for(int j=0; j<n-1-i;j++){
    if(arr[j]>arr[j+1]){
    //swap(arr[j],arr[j+1]);
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    didswap=1;
    }   
 }
 if(didswap==0) break;
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
  Bubble_sort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}