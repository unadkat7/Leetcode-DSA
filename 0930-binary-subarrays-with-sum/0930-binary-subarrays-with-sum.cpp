class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        mp[0]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int que = sum - goal;
            if(mp.count(que)){
                cnt+=mp[que];
            }
            mp[sum]++;
        }

        return cnt;

    }
};