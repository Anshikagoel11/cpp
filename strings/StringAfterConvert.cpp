//1945. Sum of Digits of String After Convert

#include<bits/stdc++.h>
using namespace std;
int main(){
   string s,p;
    int k;
    cin>>s>>k;
    vector<string>v;//vector ko string ka leya kyuki hamare pass baad me string to int convert ka func hai 
     for(int i=0;i<s.length();i++){
        int x=s[i]-97+1;  //stores ASCII value of each char of string in a string
        p = to_string(x);  // x ko string me convert keya kyuki vector me push karna tha vector ko char datatype ka isleye nhi leya kyuki phir vector me bs char push hote aur int to char cnvert krna ka way nhi hota (hota hoga ho pta nhi tha)
      v.push_back(p);
     }
     string r;
     for(int i=0;i<v.size();i++){  // har elm ko seperate out krne ke leye ek aalag string me daala mtlb ki agar kisi char ke value 'x' me 12 aaye hogi toh vo string me "12" convert hoke vector me gyi hogi but hume sum ke time 12 nhi 1,2 seperate chaye aur "12" vector me single index ki value hogi
        r+=v[i];
     }
     int sum=0;
     string y;
     while(k--){
        sum=0;
     for(int i=0;i<r.size();i++){
        y=r[i];  // since sum ke time int chaye tabhi sum hoga aur string r me char ke tarah hogi every value so phale use int me convert keya with the function stoi()
       sum+=stoi(y);
     }
     r=to_string(sum);  //again r me sum dala so that jo hum sum aaaya hai uska furthur sum ho skte .ex -sum=33 then again r="33" ho then sum=0(so that sum me 33 phale wale aur 3+3=6 --> 33+6=39 aese add na ho)
     }
     cout<<sum;
    return 0;
}