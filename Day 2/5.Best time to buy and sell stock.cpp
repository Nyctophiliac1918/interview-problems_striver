// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// We keep a track of the minimum in the left side, and then find the max profit by subtarcting the min and present price at the particular day.


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX,p=0;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            p=max(p,prices[i]-m);
        }
        return p;
    }
};
