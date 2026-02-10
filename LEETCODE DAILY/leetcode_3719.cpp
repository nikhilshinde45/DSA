class Solution {
public:
    int longestBalanced(vector<int>& nums) {
    int n=nums.size();

    set<int>even;
    set<int>odd;
    int cnt =0 ;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0) even.insert(nums[i]);
        else odd.insert(nums[i]);
        for(int j=i+1;j<n;j++){
             if(nums[j]%2==0) even.insert(nums[j]);
        else odd.insert(nums[j]);
        if(even.size()==odd.size()){
           // cnt++;
            maxi=max(maxi,j-i+1);
        }

        }
        cnt = 0 ;
        
        even.clear();
        odd.clear();

    }
    return maxi ;
        
    }
};