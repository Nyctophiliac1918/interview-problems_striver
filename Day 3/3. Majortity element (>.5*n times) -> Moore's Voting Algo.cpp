// https://leetcode.com/problems/majority-element/
// Moore's Voting Algo

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,candidate=nums[0];
        
        for(int num:nums)
        {
            if(!c) candidate=num;
            if(num==candidate) c++;
            else c--;
        }
        
        return candidate;
    }
};
