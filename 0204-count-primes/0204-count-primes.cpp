    class Solution {
    public:
        int countPrimes(int n) {
            int cnt=0;
            vector<bool> p(n+1,true);
            p[0]=false;
            p[1]=false;
            for(int i=2;i<n;i++){
                if(p[i]){
                    cnt++;
                    for(int j=i*2;j<n;j+=i){
                        p[j]=false;
                    }
                }
            }

            return cnt;
        }
    };