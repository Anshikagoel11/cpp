// Humpy likes to jump from one building to another. But he only jumps to next higher building and stops when no higher building is available. Stamina required for a journey is xor of all the heights on which humpy jumps until he stops.
// If heights are [1 2 4], and he starts from 1, goes to 2 stamina required is 1^2=3, then from 2 to 3. Stamina for the entire journey is 1^2^4=7.
// . Find the maximum stamina required if can start his journey from any building.If he starts from building 1, the stamina required is 1 ^ 2 ^ 3 ^ 8 = 8

// From the building 2, the stamina required is 2 ^ 3 ^ 8 = 9
// From the building 3, the stamina required is 3 ^ 8 = 11
// Similarly, from 8 and 6, stamina required are 8 and 6 respectively.
// The maximum stamina required for the journey is from building 3 is 11.
// So the answer is 11.

#include<bits/stdc++.h>
using namespace std;
int main(){
int n,xor;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
for(int i=0;i<n;i++){
	if(arr[i]<arr[i+1]){
		int xor= xor^arr[i];  //remain!!
	}
}

    return 0;
}