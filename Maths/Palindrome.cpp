// -12121 is not palindrome (since its reverse will be 12121-)  #leetcode
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s = to_string(x);
    string original = s;
     for(int i=0;i<s.length()/2;i++){
        s[i]=s[s.length()-1-i];
     }
        if(s == original) cout<<"true";
        else cout<<"false" ;
    
    return 0;
}