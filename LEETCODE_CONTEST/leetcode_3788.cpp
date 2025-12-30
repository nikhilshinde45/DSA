class Solution {
public:
//   long long  miniele(vector<int>&arr,int n,int i){
//     long long minim=LONG_MAX; 
//      for(long long k=i;k<n;k++ ){
//          if(arr[k]<minim){
//              minim=arr[k];
//          }
//      }
//      return minim;
//   }
    long long maximumScore(vector<int>& nums) {
        long long n=nums.size();
     //   vector<long long>ps(n-1,0);
        vector<long long>mini(n);
        mini[n-1]=nums[n-1];
        for(long long i=n-2;i>=0;i--){
          mini[i] = min((long long)nums[i], mini[i+1]);
        }
        long long s=0;
        // for(long long i=0;i<n-1;i++){
        //     s+=nums[i];
        //      ps[i]=s;
        // }
        // for(long long i=1;i<n;i++){
        //     mini[i-1]=miniele(nums,n,i);
        // }
        long long maxi=LLONG_MIN;
        for(int l=0;l<n-1;l++){
             s+=nums[l];
             maxi=max((s-mini[l+1]),maxi);
        }
        return maxi;
    
     
        
    }
};