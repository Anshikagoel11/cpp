#include <bits/stdc++.h>
using namespace std;
int main() {
long n;
cin>>n;
int arr[n];
string s;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    int count = 0;
for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]) count++;
}
s+=count;
}
for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
}
return 0;
}