// Problem
//  A and B are playing a game. In this game, both of them are initially provided with a list of 
//  numbers. (Both have the same list but their own copy).Now, they both have a different strategy to play the game. 
//  A picks the element from start of his list. B picks from the end of his list.
// You need to generate the result in form of an output list.
// Method to be followed at each step to build the output list is:
// If the number picked by Ais bigger than B then this step's output is 1. B removes the number that was picked from their list.
// If the number picked by Ais smaller than B ,A then this step's output is 2.A removes the number that was picked from their list.
// If both have the same number then this step's output is 0. Both A and B remove the number that was picked from their list.
// This game ends when at least one of them has no more elements to be picked i.e. when the list gets empty.
// Output the built output list.

#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
long arr[n];

stack<int>A;
stack<int>B;
vector<int>v;
for(int i=0;i<n;i++){
cin>>arr[i];
B.push(arr[i]); //since B back se start kr rha h toh stack m uske elem starting se jane chaye tabh last elem top pe aayaga
}

for(int i=n-1;i>=0;i--){  //aur A me reverse me jane chaye tabhi toh starting elem top pe aayaga
A.push(arr[i]);  
}

while(!A.empty() && !B.empty()){
if(A.top()>B.top()){
	v.push_back(1);
	B.pop();
}
else if(A.top()<B.top()){
	v.push_back(2);
	A.pop();
}
else{
	v.push_back(0);
	A.pop();
	B.pop();
}

}
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}

return 0;
}