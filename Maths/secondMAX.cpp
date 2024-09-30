#include <bits/stdc++.h>
using namespace std;

int main() {
int t,a,b,c;
cin>>t;
for(int i=0;i<t;i++){
   cin>>a>>b>>c;
   int arr[3]={a,b,c};
    int smax=arr[0],max=arr[0];
   for(int j=0;j<3;j++){     
       if (max<arr[j])
       max=arr[j];
   }   
      for(int k=0;k<3;k++){        
        if(smax<arr[k] && arr[k]!=max)
        smax=arr[k];      
}
    cout<<smax<<endl;
   }

}