// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0 || s.size()==1)
            return s.size();
        map<char,int>m;
        int l=0,r=0,len=0;
        while(r<s.size())
        {
            if(m.find(s[r])!=m.end())
                l=max(m[s[r]]+1,l);
            
            m[s[r]]=r;
            len=max(len,r-l+1);
            r++;
            cout<<l<<" "<<r<<endl;
        }
        return len;
    }
};
