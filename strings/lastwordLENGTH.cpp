// print the length of last word present in the string. #leetcode
// ex input - "anshika and happy" , output = 5;
// input - "you are learing just think conpectually everything  " , output =10 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
   int l=s.length();
   int i=s.length()-1;
   int count = 0;
  while(i>=0 && s[i]==' '){
    count=0;
    i--;
    }
    while(i>=0 && s[i]!=' '){
    count+=1;
    i--;
    }  
  cout<<count<<endl;
    return 0;
}