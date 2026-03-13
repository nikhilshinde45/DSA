class Solution {
public:
bool ispossible(int h , vector<int>&worker,long long mid){

    int n = worker.size();

    int taken = 0;
     int cnt = 0;
    for(int i = 0 ; i < n ; i++){

       int time = worker[i];
       int k = 1;
      
       long long s = k * worker[i];
       while(s<=mid){
        cnt++;
       
       
        if(cnt>=h) return true;
        k++;
        s += (long long) (k*(long long)worker[i]);
       }
      if(cnt>=h) return true;

       s=0;




    }
    return cnt>=h;
}
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        if(workerTimes.size() == 1) return (long long)mountainHeight*(mountainHeight+1)*workerTimes[0]*0.5;

        long long low = 0;
        long long high = 1e18;

        long long ans = high;

        while(low <= high){
            long long mid = (low + high) >> 1;

            if(ispossible(mountainHeight,workerTimes,mid)){
                ans = mid;
                high = mid -1;
            }else{
                low = mid +1 ;
            }
        }

        return ans ;
        
    }
};