class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0;
        int r=0;
        int s=0;

        for(char c:moves){
            if(c=='L'){
                l++;
            }
            else if(c=='R'){
                r++;
            }
            else{
                s++;
            }
        }   

        int eq = abs(l-r);
        int ans = eq+s;

        return ans;
    }
};