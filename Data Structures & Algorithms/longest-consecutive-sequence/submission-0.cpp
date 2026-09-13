class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique;
        for(int num : nums) {
            unique.insert(num);
        }
        int longest = 0;
        for(auto it : unique) {
            if(!unique.contains(it - 1)) {
                int x = it;
                int cnt = 1;
                while(!unique.empty() && unique.contains(x + 1)){
                    cnt++;
                    x++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};
