class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int> mp;

        for(char c:s){
            mp[c]++;
        }

        int ans=0;
        
        for(char c='0'; c <= '4'; c++){
            ans+= abs(mp[c]-mp['9'-(c-'0')]);
        }

        for(char c='a';c<='m';c++){
            ans += abs(mp[c] - mp['z' -(c - 'a')]);
        }

        return ans;
    }
};