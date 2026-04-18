class Solution {
    int rev(int num){
        int revv = 0;
        while(num > 0){
            revv = revv*10 + (num%10);
            num /=10;
        }
        return revv;
    }
public:
    int mirrorDistance(int n) {
        int rr = rev(n);
        int ans = abs(n-rr);
        return ans;
    }
};