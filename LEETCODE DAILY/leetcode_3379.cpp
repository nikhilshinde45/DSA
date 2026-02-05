class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){

                temp[i]=nums[(i+nums[i])%n];

            }else if(nums[i]<0){
                int h=i;
                for(int k=0;k<abs(nums[i]);k++){
                    if(h>0){
                        h--;
                    }else if(h==0){
                        h=n-1;
                    }
                }
                
                temp[i]=nums[h];

            }else{
                temp[i]=nums[i];

            }
        }

        return temp;
        
    }
};