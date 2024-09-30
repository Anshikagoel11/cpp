// //3092. Most Frequent IDs

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n],freq[n];
    for(int i=0;i<n;i++){ 
    cin>>nums[i];
    }
    for(int i=0;i<n;i++) {
        cin>>freq[i];
    }
    map<int,int>mpp;
    set<pair<int,int>>s;
    //set<pair<int,int>,greater<pair<int,int>>s;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(freq[i]>=0){
        auto it =s.find({mpp[nums[i]],nums[i]});
        if(it!=s.end()){
            s.erase(it);
        }
        }
        else {
            auto it2 = s.find({mpp[nums[i]],nums[i]});
            s.erase(it2);
        }
        s.insert({mpp[nums[i]]+freq[i] , nums[i]});
         mpp[nums[i]]+=freq[i];  
         auto it = s.rbegin();
     ans.push_back((*it).first);          
    }
  for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}


// class Solution {
// public:
//     vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
//       unordered_map<long long,long long>mpp;
//       set<pair<long long,long long>>st;
//        vector<long long>ans;
//      for(int i=0;i<nums.size();i++){
//         if(freq[i]>=0){
//         auto it =st.find({mpp[nums[i]],nums[i]});
//           if(it!=st.end()){;
//            st.erase(it);
//           }
//             st.insert({freq[i]+mpp[nums[i]],nums[i]});
//              mpp[nums[i]]+=freq[i];
//         }
//           else { //yeh cond bhe islyey lagage taki kuch TC pe farak pade kyuki yha agar freq<0 aaye toh mtlb vo elem pakka h hi set me toh find krne ki need nhi h find function ki TC nhi hone chaye but beats 19.93% dono case me same hi aa rha h so pta nhi TC ka 
//                 auto it2 = st.find({ mpp[nums[i]], nums[i] });
//                 st.erase(it2); 
//                 st.insert({ mpp[nums[i]] + freq[i], nums[i] });
//                 mpp[nums[i]] += freq[i];
//             }
//              auto it2=st.rbegin();//set sorted manner me store karata hai by default (min to max) so top me min hoga hume max chaye jo ki end me hoga so rbegin se le lenge ya phir set ko bhe set<pair<long long,long long>,greater<pair<long long,long long>>> lelo aur phir it2=st.begin(); lelo  
//             ans.push_back((*it2).first);
//      }
//        return ans; 
//     }
// };