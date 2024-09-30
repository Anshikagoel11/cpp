#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low ,int high){
    int pivot = arr[low];  //can assume any elem as pivot
    int i=low;
    int j=high;
    while(i<j){
    // each time we find an element less than or equal to the pivot
    while(arr[i]<=pivot && i<=high-1 ){
     i++;
    }
    // each time we find an element greater to the pivot
     while(arr[j]>pivot &&  j>=low+1){  //jb tk koi elem that is greater then pivot nhi mile jata j-- krte rhnege
     j--;
    }
    if(i<j) swap(arr[i],arr[j]);  // milte hi swap kr denge
    }
     swap(arr[j],arr[low]);  // agar j ,i ko cross kr dega toh mtlb vhi pivot ki index h toh vha hi pivot elem ko dal denge vo us elem ko pivot ke index pe (basically swap krnege )
     return j;  //pivot ka index mil gya 
}

void QuickSort(int arr[],int low , int high){
    if(low<high){ //means more than one elem in array is present
    //rearranging elem across pivot 
    int pivotindex = partition(arr,low,high);
    //recur on subarray containing elem that are less than pivot
    QuickSort(arr,low,pivotindex-1);
    //recur on subarray containing elem that are greater than pivot
    QuickSort(arr,pivotindex+1,high);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    QuickSort(arr,0,n-1);

//print the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
