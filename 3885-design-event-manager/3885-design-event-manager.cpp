class EventManager {
public:
    priority_queue<pair<int,int>> pq;
    unordered_map<int,int> mp;

    EventManager(vector<vector<int>>& events) {
        for(auto &e : events){
            int id = e[0];
            int pr = e[1];
            mp[id] = pr;
            pq.push({pr, -id});
        }
    }

    void updatePriority(int eventId, int newPriority) {
        mp[eventId] = newPriority;
        pq.push({newPriority, -eventId});
    }

    int pollHighest() {
        while(!pq.empty()){
            auto [pr, negId] = pq.top();
            int id = -negId;
            pq.pop();

            if(mp.count(id) && mp[id] == pr){
                mp.erase(id);
                return id;
            }
        }
        return -1;
    }
};