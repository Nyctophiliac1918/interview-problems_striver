// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long maxs=nums[0],s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            maxs=max(s,maxs);
            if(s<0) s=0;
        }
        return maxs;
    }
};
