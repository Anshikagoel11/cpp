#include<bits/stdc++.h>
using namespace std;
int main(){
    int ns,n;
    cin>>ns>>n;
    string s[100];
    for(int i=0;i<ns;i++) cin>>s[i];
    int sum=0,ans=INT_MAX,dis=0;
    for(int i=0;i<ns;i++){
        for(int j=i+1;j<ns-1;j++){
            for(int k=0;k<n;k++){
               dis=abs(s[i][k]-s[j][k]);
               sum+=dis;
            }
            ans=min(ans,sum);
            sum=0;
        }
    }
    cout<<ans;
    return 0;
}