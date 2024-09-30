//1464. Maximum Product of Two Elements in an Array
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>2) pq.pop();
        }
        int maxpd=1;
        while(pq.size()>0){
            maxpd*=(pq.top()-1);
            pq.pop();
        }
        return maxpd;
    }
};

// or 
// can be solve by finding max and secondmax value in array then return (max-1 )*(smax-1);
// just like --
// int  0 ;
// int smax = 0;
//   if(nums[i]>mx)
//             {
//                 s_mx=mx;
//                 mx=nums[i];
//             }
//             else if(nums[i]>s_mx)
//             {
//                 s_mx=nums[i];
//             }