//if guess number at index is correct the put G in another string otherwise B;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
            string S,T,M;
      cin>>S>>T;
      for(int i=0;i<5;i++){
          if(S[i]==T[i]) M+='G';
          else M+='B';
      }
      cout<<M<<endl;
    }

}
