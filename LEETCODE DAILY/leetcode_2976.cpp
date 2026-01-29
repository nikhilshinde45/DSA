class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {

      const long long inf=1e18;

      unordered_map<char,unordered_map<char,long long >>dist;
      for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            dist[i][j]=(i==j)?0:inf;
        }
      }

      int n=original.size();
      for(int i=0;i<n;i++){
        char ch1=original[i];
        char ch2=changed[i];
        dist[ch1][ch2]=min(dist[ch1][ch2],(long long )cost[i]);
      }
    

     for(char k='a';k<='z';k++){
         for(char i='a';i<='z';i++){
            for(char j='a';j<='z';j++){
                if(dist[i][k]!=inf&&dist[k][j]!=inf){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
         }
     }

     long long ans=0;
       int p=source.length();
       for(int i=0;i<p;i++){
        char ch3=source[i];
        char ch4=target[i];
        if(dist[ch3][ch4]==inf) return -1;
        ans+=dist[ch3][ch4];
       }
       return ans;


        
    }
};