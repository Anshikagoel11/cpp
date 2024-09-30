#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[],int n){
    if(i>=n/2)  return ;
    swap(arr[i],arr[n-1-i]);
     reverse(i+1,arr,n);
    // or return reverse(i+1,arr,n); since array is always pass by reference so if we even doesnt return it the change was already occured in the original array .
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}