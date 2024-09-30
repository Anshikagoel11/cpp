//****************************************syntax used in array******************************************* */


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;  //size of array
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<endl;
//     sort(arr,arr+n); //without sort bhe same results hi mil rhe hai

//     int *ptr = lower_bound(arr,arr+n,4);  //that elem or if not that then next elem greater than this and if no greater elem is there than address of end 

//    // int &ptr = lower_bound(arr,arr+n,4)-arr; //error 

//     int index = lower_bound(arr,arr+n,4)-arr; //gives index of that elem;

//     int index2=upper_bound(arr,arr+n,4)-arr;  //gives index of next elem of searched elem 

//    int *ptr2 = upper_bound(arr,arr+n,4);
// // if(ptr==(arr+n)){
// //     cout<<"Not found"<<endl;  //can use like this as well
// // }
// // else {
// // cout<<(*ptr);
// // }
//     cout<<"address is:"<<ptr<<endl;
//     cout<<"element is :"<<(*ptr)<<endl;
//     cout<<"element is :"<<(*ptr2)<<endl;
//     cout<<"index is:"<<index<<endl;
//     cout<<"index2 is:"<<index2<<endl; 

//     return 0;
// }



//************************************************syntax for vectors***************************************** */


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(v.begin(),v.end());
//     auto it = lower_bound(v.begin(),v.end(),3);
//     int index = lower_bound(v.begin(),v.end(),3)-v.begin();
//     int index2 = upper_bound(v.begin(),v.end(),3)-v.begin();
    
//     cout<<*it<<endl;
//     cout<<index<<endl;
//     cout<<index2<<endl;
//     return 0;
// }



///**************************************************sets  *********************************************** */


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     set<int>s;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//       s.insert(value);
//     }

//     //sort(v.begin(),v.end());  no need

//     auto it = s.lower_bound(10);   
  
// cout<<*it<<endl;  

//     return 0;
// }



//****************************************maps**************************************************** */


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<int,int>m;
   m.insert({2,4});
   m.insert({1,5});
   m.insert({7,9});
    auto it = m.lower_bound(5);   
    //    1.always keys are searched in map 
    //    2. if the searched elem is not present then return 'next greater' key and value.
    //    3. If searched value of 'key' exceed (value bade ho jate h) jo 'keys ki values hai map me' then 'end iterator' return hogi.
    cout<<(*it).first<<endl<<(*it).second<<endl;
    return 0;
}