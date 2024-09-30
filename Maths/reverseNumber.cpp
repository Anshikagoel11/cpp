// reverse number with overflow interger condition - leetcode (medium)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
       int reverseNum =0; 
        while(x!=0){
      int ld=x%10;
      x=x/10;
         if(reverseNum>INT_MAX/10 ||reverseNum<INT_MIN/10) {
            cout<< 0; 
            }
        reverseNum=reverseNum*10+ld;
        }   
  cout<<reverseNum;

    return 0;
}