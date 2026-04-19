class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans = n;

        if(n==1){
            return 0;
        }

        vector<int> suffixMin(n,0);
        suffixMin[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--) {
            suffixMin[i] = min(suffixMin[i+1], nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            if(maxi-suffixMin[i] <= k){
                ans = min(ans,i);
            }
        }   

        return ans==n ? -1 : ans;
    }
};