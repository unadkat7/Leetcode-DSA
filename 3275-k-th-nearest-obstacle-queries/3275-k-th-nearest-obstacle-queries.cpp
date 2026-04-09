class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int> pq;
        int n = queries.size();

        vector<int> res(n,-1);

        for(int i=0;i<n;i++){
            pq.push(abs(queries[i][0]) + abs(queries[i][1]));
            if(pq.size()>k){
                pq.pop();
            }

            if(pq.size()==k){
                res[i] = pq.top();
            }
        }

        return res;
    }
};