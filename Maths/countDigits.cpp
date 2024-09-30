#include<bits/stdc++.h>
// another method to count digits 
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = (int)(log10(n)+1);
    cout<<count;
    return 0;
}