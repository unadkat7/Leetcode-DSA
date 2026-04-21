class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = 200;
        for(vector<int> vec:tasks){
            ans = min(ans,vec[0]+vec[1]);
        }
        return ans;
    }
};