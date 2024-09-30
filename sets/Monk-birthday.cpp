// Monk's birthday is coming this weekend! He wants to plan a Birthday party and is preparing an invite list with his friend Puchi. He asks Puchi to tell him names to add to the list.
// Puchi is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Monk hates redundancy and hence, enlists the names only once.
// Find the final invite-list, that contain names without any repetition.
// Input:
// First line contains an integer T. T test cases follow.
// First line of each test contains an integer N, the number of names that Puchi pops up with.
// Output:
// For each testcase,Output the final invite-list with each name in a new line. The names in the final invite-list are sorted lexicographically.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 		set<string>names;
// 		int n;
// 		cin>>n;
// 		for(int j=0;j<n; j++){
// 			string name;
// 			cin>>name;
// 			names.insert(name);
// 		}
// 		for(auto it=names.begin(); it!=names.end();it++){
// 			cout<<*it<<endl;
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
     set<int>s;
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            int n;
            cin>>n;
         s.insert(n);
        }
        cout<<s.size();
        for(auto it=s.begin();it!=s.end();it++){
           cout<<(*it)<<" ";
        }
    
    return 0;
}