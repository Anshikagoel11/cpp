oid QuickSort(int arr[],int low , int high){
    if(low<high){ //means more than one elem in array is present
    //rearranging elem across pivot 
    int pivotindex = partition(arr,low,high);
    //recur on subarray containing elem that are less than pivot
    QuickSort(arr,low,pivotindex-1);
    //recur on subarray containing elem that are greater than pivot
    QuickSort(arr,pivotindex+1,high);
    }
}