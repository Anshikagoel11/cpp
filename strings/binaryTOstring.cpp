// replace with A if string have consective numbers 0 0 , T if  0 1...so on
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
          string s,snew="";
        cin>>s;       
        for(int i=0;i<n;i=i+2){
        if(s[i]=='0' && s[i+1]=='0')  snew+="A";
        else if(s[i]=='0' && s[i+1]=='1') snew +="T";
         else if(s[i]=='1' && s[i+1]=='0') snew +="C";
         else if(s[i]=='1' && s[i+1]=='1') snew +="G";
         
    }  
     cout<<snew<<endl;
   
}
return 0;
}