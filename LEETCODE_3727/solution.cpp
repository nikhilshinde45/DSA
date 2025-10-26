class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
         long long  n=nums.size();
         for(long long  i=0;i<n;i++){
             nums[i]=abs(nums[i]);
         }

        sort(nums.rbegin(),nums.rend());
       
        vector<int>arr1=nums;
                sort(nums.begin(),nums.end());
                        vector<int>arr2=nums;
                        long long  i=0;
                          long long  k=0;
                          long long  j=0;
                          long long  ans=0;
                         long long  cnt=0;
                        while(k<=n-1){
                            if(cnt%2==0){
                            ans+=abs(arr1[i]*arr1[i]);
                            i++;
                            cnt++;
                            }else{
                                ans-=abs(arr2[j]*arr2[j]);
                                j++;
                                cnt++;
                            }
                            k++;

                        }
                        return ans;



        
        
    }
};