class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        for(string query : queries){
            for(string s:dictionary){
                int cnt = 0;
                for(int i=0;i<query.size();i++){
                    if(query[i]!=s[i]){
                        cnt++;
                    }
                }

                if(cnt<=2){
                    ans.push_back(query);
                    break;
                }
            }
        }

        return ans;
    }
};