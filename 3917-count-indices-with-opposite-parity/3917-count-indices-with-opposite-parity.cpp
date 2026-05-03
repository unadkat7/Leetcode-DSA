class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int e=0;
        int o=0;

        int n=nums.size();
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==0){
                e++;
                res[i]=o;
            }else{
                o++;
                res[i]=e;   
            }
        }

        return res;
    }
};