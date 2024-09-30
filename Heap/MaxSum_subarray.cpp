//2099. Find Subsequence of Length K With the Largest Sum

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>sorted_index;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
        pq.push({nums[i],i});
        if(pq.size()>k) pq.pop();  //nlogk
        }
      while(pq.size()>0){
        sorted_index.push({pq.top().second,pq.top().first});
        pq.pop();
      }
      while(sorted_index.size()>0){
        ans.push_back(sorted_index.top().second);
        sorted_index.pop();
      }
      return ans;
    }
};


//or 
// class Solution {
// public:
//     vector<int> maxSubsequence(vector<int>& nums, int k) {
//       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;// minheap 
//         for(int i = 0; i < nums.size(); i++){
//             q.push({nums[i], i});
//             if (q.size() > k) {
//                 q.pop();
//             }
//         }
//         map<int,int> m;
//         while(!q.empty()){
//             m.insert({q.top().second,q.top().first});
//             q.pop();
//         }
//         vector<int>ans;
//         for (auto&x : m){
//             ans.push_back(x.second);
//         }

//         return ans;
//     }