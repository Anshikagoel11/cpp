//second greatest element using set

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //length of set
    cin>>n;
    set<int>st;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.insert(x);
  }
   st.erase(--st.end()); //since set stores the elements in arranging order so we delete the last elements --> now second largest is at the end --> now acess it by the address
   auto it=--st.end();
  cout<<*it;
      return 0;
}