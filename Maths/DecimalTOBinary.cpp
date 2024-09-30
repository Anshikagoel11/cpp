#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,rem,MAXone=0,countOne=0;
    cin>>n;
    // Create an array to store the binary representation of size 32, Since the binary representation of an integer can have at most 32 bits.
    int arr[32];
    while(n>0){
     rem= n%2;
     arr[i]=rem;
     n=n/2;
     i++;
    }
    // print reverse array since after converting reverse representation hi hota h binary ka 
    //  for(int j=i-1;j>=0;j--){
    // cout<<arr[j]<<" ";  
    // }

    //to count max consective 1 occuring together in binary form of decimal num.
   for(int j=i-1;j>=0;j--){
   if(arr[j]==1)  countOne++;
   else  countOne=0;  
   if(countOne>MAXone) MAXone=countOne; 
   }
cout<<MAXone;
    return 0;
}