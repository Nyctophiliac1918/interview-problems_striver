// https://leetcode.com/problems/search-a-2d-matrix/
// binary search to find the row in which the element can be present and then search the row for the target element.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0)
            return false;
        vector<int>v(matrix.size());
        for(int i=0;i<matrix.size();i++)
        {
            v[i]=matrix[i][0];
        }
        int s=0,e=v.size()-1,p=0;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(v[mid]==target)
                return true;
            else if(v[mid]<target)
            {
                p=mid;
                s=mid+1;
            }
            else e=mid-1;  
        }
        int l=0,r=matrix[p].size()-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(matrix[p][m]==target)
                return true;
            else if(matrix[p][m]<target)
                l=m+1;
            else r=m-1;
        }
        return false;
    }
};
