//if elem is present return its index else -1;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int index=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==x){
        index=i;
        break;
    }
    else continue;
  }
  cout<<index;
    return 0;
}