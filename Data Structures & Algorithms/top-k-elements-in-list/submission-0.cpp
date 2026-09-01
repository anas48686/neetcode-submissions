class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int n = nums.size();
        for(int num : nums) freq[num]++;
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto f: freq){
            pq.push({f.second, f.first});
            if(pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        return ans;
    }
};
