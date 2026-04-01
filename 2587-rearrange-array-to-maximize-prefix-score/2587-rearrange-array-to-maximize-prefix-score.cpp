class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n = nums.size();
        //vector<int>pf(n);
         long long  sum = nums[0];
        int cnt= 0 ;
        if(sum>0){

            cnt=1;

        }

        for(int i = 1;i < n ; i++){
            sum += nums[i];
            if(sum > 0) cnt++;

        }

        return cnt;
        
    }
};