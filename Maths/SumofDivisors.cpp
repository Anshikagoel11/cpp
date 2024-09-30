//Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of 
// Input:
// N = 4
// Output:
// 15
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// ans = F(1) + F(2) + F(3) + F(4)
//     = 1 + 3 + 4 + 7
//     = 15

#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum,sumF=0;
        for(int i=1;i<=N;i++){
            sum=0;
         for(int j=1;j<=i;j++){
             if(i%j==0) 
             sum+=j;
             
         }
         sumF+=sum;
        }
       cout<<sumF;
    return 0;
}
// do it with less time complexitiy!