// Sample Input
// 2
// Hacker
// Rank

// Sample Output
// Hce akr
// Rn ak


#include <bits/stdc++.h>
using namespace std;
int main() {     
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,x,y;
        getline(cin>>ws,s);
        
        for(int i=0;i<s.size();i++){
            
            if(i%2==0){
                 x = x + s[i];
            }
             if(i%2!=0){
                 y = y + s[i];
            }           
        }
        
        cout<<x<<" "<<y<<endl;
    }   
    return 0;
}