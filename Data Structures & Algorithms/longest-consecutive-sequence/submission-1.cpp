class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int lastSmall = INT_MIN;
        int cnt = 1;
        int longest = 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] - 1 == lastSmall){
                cnt++;
                lastSmall = nums[i];
            }
            else if(nums[i] != lastSmall){
                cnt = 1;
                lastSmall = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
