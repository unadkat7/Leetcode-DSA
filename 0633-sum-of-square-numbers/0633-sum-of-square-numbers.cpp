class Solution {
public:
    bool isPerfectSquare(long long x) {
        long long left=0, right=x;
        
        while (left <= right) {
            long long mid=left+(right-left) / 2;
            long long sq = mid*mid;
            
            if (sq == x) return true;
            else if (sq < x) left = mid + 1;
            else right = mid - 1;
        }
        
        return false;
    }

    bool judgeSquareSum(int c) {
        for (long long a=0; a*a<=c;a++) {
            long long target = c-a*a;
            
            if (isPerfectSquare(target)) return true;
        }
        return false;
    }
};