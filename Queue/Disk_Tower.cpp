
// Your task is to construct a tower in 
//  days by following these conditions:
// Every day you are provided with one disk of distinct size.
// The disk with larger sizes should be placed at the bottom of the tower.
// The disk with smaller sizes should be placed at the top of the tower.
// The order in which tower must be constructed is as follows:

// You cannot put a new disk on the top of the tower until all the larger disks that are given to you get placed.
// Print Nth lines denoting the disk sizes that can be put on the tower on the ith day.

// Input format
// First line: 
//  ith denoting the total number of disks that are given to you in the ith subsequent days
// Second line: 
//  N integers in which the ith integers denote the size of the disks that are given to you on the ith day
// Note: All the disk sizes are distinct integers in the range of 1 to N. 

// Output format

// Print N lines. In the ith line, print the size of disks that can be placed on the top of the tower in descending order of the disk sizes.
// If on the ith day no disks can be placed, then leave that line empty.

// Sample Input
// 5
// 4 5 1 2 3
// Sample Output
// //leave blank 
// 5 4
 
 
// 3 2 1

// Explanation
// On the first day, the disk of size 4 is given. But you cannot put the disk on the bottom of the tower as a disk of size 5 is still remaining.

// On the second day, the disk of size 5 will be given so now disk of sizes 5 and 4 can be placed on the tower. 

// On the third and fourth day, disks cannot be placed on the tower as the disk of 3 needs to be given yet. Therefore, these lines are empty. 

// On the fifth day, all the disks of sizes 3, 2, and 1 can be placed on the top of the tower.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=n;

    priority_queue<int>que;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        que.push(arr[i]);
        while(que.top()==max){
         cout<<que.top()<<" ";
         max--;
         que.pop();
        }
        cout<<endl;
    }
    return 0;
}