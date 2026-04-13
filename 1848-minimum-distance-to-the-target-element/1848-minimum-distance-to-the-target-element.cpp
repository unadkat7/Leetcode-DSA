class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini=INT_MAX;
        int str=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                str=abs(i-start);
                mini=min(str,mini);
            }
        }

        return mini;
    }
};