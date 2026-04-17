class Solution {
public:
    int maxDistinct(string s) {
      unordered_set<char> se;

      for(char c:s){
        se.insert(c);
      }  

      return se.size();
    }
};