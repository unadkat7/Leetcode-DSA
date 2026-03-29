class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int>eve(26,0);
        vector<int>odd(26,0);


        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                eve[s1[i]-'a']++;
                eve[s2[i]-'a']--;
            }
        }
        for(int i=0;i<eve.size();i++){
            if(eve[i]!=0) return false;
        }

         for(int i=0;i<s1.size();i++){
            if(i%2!=0){
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }
        for(int i=0;i<odd.size();i++){
            if(odd[i]!=0) return false;
        }

        return true;
    }  
};