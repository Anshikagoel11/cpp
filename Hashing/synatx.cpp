#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  int max = *max_element(arr,arr+n);

    //prestore
    int hash[max+1]={0};
    for(int i=0;i<n;i++){
      hash[arr[i]]++;  
    }

//fetching 
int q; //test cases
cin >>q;
for(int i=0;i<q;i++){
int x;
cin>>x; //number to check frequency
cout<<hash[x];  //has[x] means iss index pe frequency kya store hai
}
    return 0;
}