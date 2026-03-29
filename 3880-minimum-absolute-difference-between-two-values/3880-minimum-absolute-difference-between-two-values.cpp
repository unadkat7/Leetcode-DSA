class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int oneIndex = INT_MAX;
        int twoIndex = INT_MAX;

        int diff = INT_MAX;
        int minDiff = INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) continue;
            if(nums[i]==1){
                oneIndex = i;
            }else if(nums[i]==2){
                twoIndex = i;
            }

            diff = abs(oneIndex-twoIndex);
            minDiff = min(minDiff,diff);
        }

        if(oneIndex == INT_MAX || twoIndex == INT_MAX){
            return -1;
        }

        return minDiff;

    }
};