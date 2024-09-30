// brute force
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n,target;
//      cin>>n>>target;
//      int arr[100];
//      int flag=0;
//      for(int i=0;i<n;i++) cin>>arr[i];
// logic
//     for(int i=0;i<n;i++){   
//         int x=target-arr[i];
//         for(int j=i+1;j<n;j++){  
//             if(arr[j]==x){
//                 flag=1;
//                 break;
//             }
//         }
//       if(flag==1) break;
//     }
//     if(flag==1) cout<<"yes";
//         else cout<<"NO";
//     return 0;
// }
//TC -O(n^2)
//SC -O(1)



// better option
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, target;
//     cin >> n >> target;
//     int arr[100];
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     // logic
//     unordered_set<int>s;  //O(logn) in worst case , O(1) in best and avg case 
  
//     for (int i = 0; i < n; i++)     //O(n)
//     {
//         if (s.find(target - arr[i]) != s.end())   //O(n) in worst and O(1) in avg and best case 
//         {
//             cout << "YES";
//             flag=0;
//             break;
//         }

//         else
//             flag=1;
//              s.insert(arr[i]);  
//     }
//      if(flag==1) cout<<"NO";
//     return 0;
// }

//SC - O(x) x: no. of elem in set
//TC -  O(n logn) 





// optimal  - using two pointers 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    int arr[100];
    int flag = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // logic
    sort(arr,arr+n);   //O(n logn)
     int left=0,right=n-1;
     while(left<=right){    //O(n)
      int sum=arr[left]+arr[right];
      if(sum==target){
        flag=1;
         cout<<"YES";
         break;
      }
      else if (sum<target) left++;
      else right--;
     }
     if(flag==0) cout<<"No";
    return 0;
}
//TC - O(n logn)+O(n)
//SC - O(1)