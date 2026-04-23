class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n = v1.size();
        int m = v2.size();

        int i = 0;
        int j = 0;

        while (i < n || j < m) {
            int a = 0;
            int b = 0;

            while(i<n && v1[i]!='.'){
                a=a*10 + (v1[i] - '0');
                i++;
            }

            while(j<m && v2[j]!='.'){
                b=b*10 + (v2[j] - '0');
                j++;
            }

            if(a<b) return -1;
            if(a>b) return 1;

            i++;
            j++;
        }

        return 0;
    }
};