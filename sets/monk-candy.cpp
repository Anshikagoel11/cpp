// Our Monk loves candy!
// While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
// He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
// Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
// Find the maximum number of candies that Monk can consume.

// Input:
// First line contains an integer T. T test cases follow.
// First line of each test case contains two space-separated integers N and K. 
// Second line of each test case contains N space-separated integers,the number of candies in the bags.

// Output:
// Print the answer to each test case in a new line.

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 10^5
// 0 ≤ K ≤ 10^5
// 0 ≤ Ai ≤ 10^10  // means candy should be in long long datatype

// APPROCH--> 
// 1. monk should eat max no. of candies that means monk should pick a bag that have max candies (for that at every test case we need to have the bag that have maximum candies).
// 2.also we know very well that set stores value in sorted form.
// 3.so if we tranfer all the candycount of bags in a set , the max no. of candycount will place at last index and then we can easily access the last index.
// 4. then acc. to ques we add that value into maxCandyEat--> then delete that last index value --> then again insert candycount/2 into set;
// 5.print maxCandyEat; 
// 6. also set stores values uniquely and we dont have to combine the duplicated(repeated) values of candy (if more than one bag containes same number of candies that they should exist seperatly) so this means using multiset is correct approch not the set.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
    multiset<long long>bags;
     for(int i=0;i<n;i++){
        long long candyCount;
        cin>>candyCount;
        bags.insert(candyCount);
     }
     int maxCandyEaten=0;
     for(int i=0;i<k;i++){
      auto  last_candy= --bags.end(); //returns address of that candycount
      long long targetCandy = *last_candy; 
      maxCandyEaten += targetCandy;
      // bags.erase(targetCandy) cant do this because it will delete all max candy(if present more than one) so we have to go with delete with help of iterator 
      bags.erase(last_candy);
      bags.insert(targetCandy/2);
     }
     cout<<maxCandyEaten<<endl;
    }
    return 0;
}