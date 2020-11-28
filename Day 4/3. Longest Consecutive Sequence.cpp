// https://leetcode.com/problems/longest-consecutive-sequence/
// method in copy

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        
        int streak=0;
        for(int num:nums)
        {
            int k=0;
            if(s.find(num-1)==s.end())
            {
                k=1;
                int p=num;
                if(s.find(num+1)!=s.end())
                {
                    k++;
                    p+=2;
                    while(s.find(p)!=s.end())
                    {
                        k++;
                        p++;
                    }
                }
            }
            streak=max(streak,k);
        }
        return streak;
    }
};
