
// 786. K-th Smallest Prime Fraction
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  // give input in sorted order
    }
priority_queue<pair<double ,pair<int,int>>>pq;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        double x=arr[i]*1.0/arr[j]; // int/int --> int hota h na isleye sbhi m 0 0 ho jyega isleye mane 0.1 se multiply kr deya usse ab quantity ke small , big hona sabhi pe barabar fark pdega toh compare bhe ussi according honge so hamare answer pr koi difference nhi aayagaa
        // or     double val = ((double)arr[i]/(double)arr[j]); //change value to double
        pq.push({x, {i,j}});
        if(pq.size()>k) pq.pop();
    }
}
int ithIndex= pq.top().second.first;
int jthIndex = pq.top().second.second;
int ans[2]={arr[ithIndex],arr[jthIndex]};
for(int k=0;k<2;k++){
    cout<<ans[k]<<" ";
}
    return 0;
}