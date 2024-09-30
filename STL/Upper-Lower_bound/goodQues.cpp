// #hackerrank - first i even dont able to understand this question , visited ques many time but then close it then decide to learn all the basic syntax for all containers and understand all about them --> then try and solve myself without any hint and help ..happy!!

// You are given N  integers in sorted order. Also, you are given Q queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.


#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; //size of an array
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     sort(arr,arr+n);
    int Q;  //no of queries
    cin>>Q;
    for(int i=0;i<Q;i++){
        long Y;  //elem to search
        cin>>Y;
        int index = lower_bound(arr,arr+n,Y)-arr;
        auto *ptr = lower_bound(arr,arr+n,Y);  //agar Y present hoga toh *ptr me vhi aaya hoga otherwise next greater elem aaya hoga.
        if(*ptr==Y) cout<<"Yes"<<" "<<index+1<<endl; //agar equal h dono means vo present hai aur YES print kro with index no.(based on 1)
        else  cout<<"No"<<" "<<index+1<<endl;  //mtlb vo present nhi hai aur *ptr me next greater elem aaya hai 
    }

    
    return 0;
}