#include<bits/stdc++.h>
using namespace std;
//using functional method
// int fact(int n){
//     if(n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//    cout<<fact(n);
//    //int factorial = fact(n);
//     // cout<<factorial;
// }

//using parameterised form------------------------------------------------------------------
// void fact(int i, int n){
//     if(i<1){
//     cout<< n;
//     return;
//     }
//     fact(i-1,n*i);   
// }
// int main(){
//     int n;
//     cin>>n;
//     fact(n,1);
// }


void factorial(int i,int fact,int n){
    if(i>n){  
        cout<<fact;
        return;
    }
    factorial(i+1,fact*i,n);
}
int main(){
    int n;
    cin>>n;
    factorial(1,1,n);
}