class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {

        int pos = 0 ;
        int cnt1 = 0;
        int cnt2 = 0;
                int n = healths.size();

        for(int i = 0 ; i < n ; i++) {if(directions[i] == 'R') cnt1++;
        else cnt2++;}
       

         if(cnt1==n ||cnt2 == n) return healths;
       vector<int>indices(n,0);
       for(int i  = 0 ; i < n ; i++){
         indices[i] = i;
       }

       sort(indices.begin(),indices.end(),[&](auto &a,auto &b){
        return positions[a] < positions[b];
       });

       stack<int>st;
       for(int i = 0 ; i < n; i++){
          if(directions[indices[i]]=='R'){
              st.push(indices[i]);
          }else{
             //collision
             while(!st.empty() && directions[st.top()]=='R' && healths[indices[i]] > 0){
                  if(healths[indices[i]]>healths[st.top()]){
                       healths[st.top()] =0;
                       st.pop();
                       healths[indices[i]]--;
                  }
                  else if(healths[indices[i]] == healths[st.top()]){
                       healths[indices[i]] = -1;
                      
                       healths[st.top()] = -1;
                        st.pop();
                       break;
                  }else{
                    healths[indices[i]] = -1;
                    healths[st.top()]--;
                    break;
                   
                  }
             }
             if(healths[indices[i]]>0){
                 st.push(indices[i]);
             }
          }
       }
       vector<int>ans;
      for(int i=0;i<n;i++){
        if(healths[i] > 0){
             ans.push_back(healths[i]);
        }
      }

      return ans ;

      
        
    }
};