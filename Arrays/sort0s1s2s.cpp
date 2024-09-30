//1. brute - simply by any sorting or sort function in O(n logn)
//2. better -  by count sort - by counting the occurence of all 0,1,2 then put that count of 0,1,2 into the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++) cin>>arr[i];

    //logic 
    //optimal method 
    //BY DUTCH FLAG ALGO - uses three pointers to assume the occurence of 0,1,2 
    // we assues that from low to mid-1 --> 0 are there
     //                    mid to high  --> 1
     //                    high+1 to n-1 --> 2
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){  //O(n)
        if(arr[mid]==0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1) {
            mid++;
        }
        else{ //if 2
        swap(arr[mid],arr[high]);
            high--;
        }
        }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}