//961. N-Repeated Element in Size 2N Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    int number=0;
    int arr[1000];
        for(int i=0;i<n;i++){
            arr[nums[i]]+=1;
             if(arr[nums[i]]==n/2){
                number=nums[i];
                break;
             }
        }
      cout<< number;
    return 0;
}