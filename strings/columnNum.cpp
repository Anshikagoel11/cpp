#include<bits/stdc++.h>
using namespace  std;
int main(){
string column;
cin>>column;
int colNum=0;
for(int i=column.length()-1;i>=0;i--){
    int x=column[i];  // since datatype is int , now x have ASCII value of that element
    int y=x-65+1;   // y have value acc to series given A-1,B-2,C-3.......
    colNum+=pow(26,column.length()-1-i)*y;
    // colNum+=pow(26,column.length()-1-i)*(column[i]-'A'+1);
    
}
   cout<<colNum;
    return 0;
}
