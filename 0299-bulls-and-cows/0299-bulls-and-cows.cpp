class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int bull = 0, cow = 0;
        unordered_map<int,int> mp1;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i])
                bull++;
            else
                mp1[secret[i] - '0']++;
        }

        for(int i=0;i<n;i++){
            if(secret[i]!=guess[i] && mp1[guess[i] - '0'] > 0){
                cow++;
                mp1[guess[i]-'0']--;
            }
        }

        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};