class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        unordered_set<char> set1 = {s1[0],s1[2]};
        unordered_set<char> set2 = {s1[1],s1[3]};

        unordered_set<char> set3 = {s2[0],s2[2]};
        unordered_set<char> set4 = {s2[1],s2[3]};
        
        return set1==set3 && set2==set4;
    }
};