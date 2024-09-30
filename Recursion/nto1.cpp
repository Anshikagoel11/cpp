#include<bits/stdc++.h>
using namespace std;

// void print(int i,int n){
// if(i>n) return;  //basecase
// print(i+1,n);
// cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
// print(1,n);
//     return 0;
// }

// using backtrack------------------------------------------------
// means to print n to 1 (5,4,3,2,1), subtraction is not allowed

void print(int i,int n){
    if(i>n) return;
    print(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    print(1,n);
}