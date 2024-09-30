#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    cin>>x;
    cout<<x<<endl;

    cout<<round(x)<<endl; //round off the digits to its nearest integer.

    cout<<fixed<<x<<endl; // gives the zero that it will have after the decimals

    cout<<setprecision(3)<<x<<endl; //set no the digits you want after decimal
    
    cout<<setprecision(2)<<round(x)<<endl; //roundoff the digits and then show zeros after decimals to show precision
   
    return 0;
}