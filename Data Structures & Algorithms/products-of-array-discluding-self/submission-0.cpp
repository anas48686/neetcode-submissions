class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffProduct(n, 1);
        suffProduct[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--) {
            suffProduct[i] = nums[i + 1] * suffProduct[i + 1];
        }
        int prefProduct = 1;
        vector<int> ans(n);
        ans[0] = suffProduct[0];
        for(int i = 1; i < n; i++){
            prefProduct *= nums[i - 1];
            ans[i] = prefProduct * suffProduct[i];
        }
        return ans;
    }
};
