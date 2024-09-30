// array is already sorted acc to ques and we have add one in last elem and array should be printed as --
// [2,3,4,9] => [2,3,4,1,0]   since 9+1=10 so 1,0

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
  vector<int>v;
//input
  for(int i=0;i<n;i++){
   int x; cin>>x;
   v.push_back(x);
  }

 int i=n-1;
//condition 1 (its simple)
if(v[i]!=9) {
   v[i]+=1;  //agar last digits 9 ke equal nhi hogi toh direct add krke print kr hi dega exp. 1 2 3 4 --> 2 3 5 
    for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
  }
}
 
else{
   while(v[i]==9){
   v[i]=0;  //1 9 9 --> 1 0 0
   i--;
  }  
bool flag = true;
  for(int i=0;i<n;i++){ 
   if(v[i]!=0) {    // to check if all elem are now zero or not 
      flag=false;
      break;
   }
  }
   if(flag==false){ 
      v[i]+=1;    // if not all zero then add one at i(jha abh i aa chuka hoga)
       for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
       }
  }
   else {
      v.push_back(1); // 9 9--> 1 0 0
        for(int i=v.size()-1;i>=0;i--){       //if all zero then starting me 1 add krdo .....yha print reverse since added one at end but need in starting ,maine  v.insert(v.begin(),1) keya tha but error aa rha tha
   cout<<v[i]<<" ";
  }
   }
  }

   return 0;
}


// method 2
// Leetcode soln


