class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
    
        int longest=0;

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int l=1;
                while(s.find(it+l)!=s.end()){
                    l++;
                }
                longest = max(longest,l);
            }
        }

        return longest;
    }
};