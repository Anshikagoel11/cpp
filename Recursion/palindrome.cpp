// string is palindrome or not using recursion
#include<bits/stdc++.h>
using namespace std;
void palindrome(int i, string s, int l){
if(i>=l/2){ 
cout<< "true";  // here printing true since if i reaches to l/2 means i is increasing and i is inc only if s[i]==s[l-1-i] since**
return;
} 
else if(s[i]==s[l-1-i]){ //** we have declared this if they are equal only then recursive call will happen otherwise return false 
palindrome(i+1,s,l);  //** this
}
else cout<<"false";
}
int main(){
string s;
getline(cin,s);
int l=s.length();
palindrome(0,s,l);
    return 0;
}