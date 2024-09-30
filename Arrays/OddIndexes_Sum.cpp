// If the integer N is between -9 and 9 (inclusive), the output should be 0. For positive integers N, you should output the sum of the values at odd indexes (considering the first index as 0). If N is negative, the output should be the negative sum of its odd-indexed digits (ignoring the negative sign, the index of the first digit is 0).

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,count=0,sum=0;
  cin>>n;
  int original=n;
  //given condition
  if(n>=-9 && n<=9) cout<<0;
 //for positive 
  else if(n>=0){
  count = int(log10(n)+1);
   i=count-1;
  while(n!=0){
    int rem = n%10;
    if(i%2!=0){
      sum+=rem;   
    }
    n=n/10;
     i--;
  }
  cout<<sum;
  }
  //for negative 
else{
 int num=(-1)*n;
  count = int(log10(num)+1);
  i=count-1;
  while(num!=0){
    int rem = num%10;
    if(i%2!=0) sum+=rem;  
    num=num/10;
     i--;
  }
  cout<<"-"<<sum;
}
  return 0;
}