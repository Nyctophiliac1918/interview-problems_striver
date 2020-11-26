// https://leetcode.com/problems/find-the-duplicate-number/
// Usng cyclic linked list and tortoise method (slow and fast pointers) cause if there's a duplicate number, there will be a cyclicity involved when we use a linked list.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=slow;
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
