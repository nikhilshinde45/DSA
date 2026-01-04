class Solution {
public:
int divisors(int n){
    int s=0;
    int cnt=0;
    for(int i=1;i<=n;i++){

        if(cnt>4){
            return 0;
        }
        if(n%i==0){
            cnt++;
            s+=i;
        }
    

    }
    if(cnt==4){
        return s;
    }
    return 0;
    
}
    int sumFourDivisors(vector<int>& nums) {
        int k=nums.size();
        int su=0;
        for(int i=0;i<k;i++){
            su+=divisors(nums[i]);

        }
        return su;
        
    }
};