//NO. of digits in input number N which divides N

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
     int  original=N;
        int count=0;
        while(N!=0){
       int a=N%10;
       if(a!=0){ //since GFG showing error for diving N by 0; since diving by 0 is undefined
        if(original%a==0) count++;
        }
        N=N/10;
        } 
        cout<< count;
    return 0;
}