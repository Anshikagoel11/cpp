//2931. Maximum Spending After Buying Items
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // or ek vector me sare elem push krke unhe sort kra sort() func se then loop se simple maxMoney me add ........ using sort is good than pq in TC 
    priority_queue<int,vector<int>,greater<int>>pq;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pq.push(arr[i][j]);
        }
    }
    int maxMoney=0 , i=1;
    while(i<=n*m && pq.size()>0){
      maxMoney+=pq.top()*i;
      pq.pop();
      i++;
    }
    cout<<maxMoney;
    return 0;
}