class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n);

        int i = 0;
        for (int x : nums) {
            if (x == 2) {
                ans[i] = -1;
            } else {
                int mask = ~(((x + 1) & (~x)) >> 1);
                ans[i] = x & mask;
            }
            i++;
        }
        return ans;
    }
};