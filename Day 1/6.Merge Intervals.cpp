// https://leetcode.com/problems/merge-intervals/
// sort the vector then, check the consecutive intervals if they merge or not and if they do not push back the vector into the 2d vector aor else make changes acc to the bigger merging overlap. if (1,4),(3,5) => (1,5)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> >m;
        sort(intervals.begin(),intervals.end());
        vector<int> v=intervals[0];
        
        for(auto it:intervals)
        {
            if(it[0]<=v[1])
                v[1]=max(it[1],v[1]);
            else{
                m.push_back(v);
                v=it;
            }
        }
        m.push_back(v);
        return m;
    }
};
