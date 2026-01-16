class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        
        vector<int> hf(hFences.size() + 2);
        vector<int> vf(vFences.size() + 2);

        hf[0] = 1;
        vf[0] = 1;
        hf[hFences.size() + 1] = m;
        vf[vFences.size() + 1] = n;
        int cnt1=hFences.size();
        int cnt2=vFences.size();
        for(int i=0;i<cnt1;i++){
            hf[i+1]=hFences[i];
        }
        for(int i=0;i<cnt2;i++){
            vf[i+1]=vFences[i];
        }
        sort(hf.begin(),hf.end());
        sort(vf.begin(),vf.end());
        set<int>st;
        for(int i=0;i<hf.size();i++){
            for(int j=i+1;j<hf.size();j++){
                st.insert(hf[j]-hf[i]);

            }
        }
        int maxi=-1;
         for(int i=0;i<vf.size();i++){
            for(int j=i+1;j<vf.size();j++){
              if(st.find(vf[j]-vf[i])!=st.end()){
                maxi=max(maxi,vf[j]-vf[i]);
              }

            }
        }
       if (maxi == -1) return -1;

        long long mod = 1e9 + 7;
        return (1LL * maxi * maxi) % mod;

        
    }
};