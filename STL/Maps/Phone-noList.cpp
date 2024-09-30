#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    unordered_map<string,long>list;    
    for(int i=0;i<n;i++){
        string name;
        int num;
        cin>>name>>num;
        list[name]=num;
    }
    string query;
      while(cin>>query){
       auto it = list.find(query);
       if(it!=list.end()) {
        cout<<(*it).first<<"="<<(*it).second<<endl;
       }
       else{
         cout<<"Not found"<<endl;
       }
      }
    
    return 0;
}