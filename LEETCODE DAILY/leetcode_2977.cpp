class Solution {
public:
 void dijkstra(int src,vector<vector<pair<int,int>>>&adj,vector<vector<long long>>&dist){

    priority_queue<pair<long long ,int>,vector<pair<long long ,int>>,greater<pair<long long,int>>>pq;
    dist[src][src]=0;
    pq.push({0,src});

    while(!pq.empty()){
        int node=pq.top().second;
        int wt=pq.top().first;
        pq.pop();
        //if(dist[src][ne])
        if(dist[src][node]<wt) continue;
        for(auto it:adj[node]){
            int ne=it.first;
            int w=it.second;
            if(dist[src][ne]>dist[src][node]+w){
                dist[src][ne]=dist[src][node]+w;
                pq.push({dist[src][ne],ne});
            }

        }
    }

 }
    long long minimumCost(string source, string target, vector<string>& original, vector<string>& changed, vector<int>& cost) {
        unordered_map<string,int>mp;
        int cnt=0;
        for(int i=0;i<original.size();i++){
            if(!mp.count(original[i])){
                mp[original[i]]=cnt;
                cnt++;
            }
            if(!mp.count(changed[i])){
                mp[changed[i]]=cnt;
                cnt++;

            }
        }

        //build the graph
        vector<vector<pair<int,int>>>adj(cnt);
        for(int i=0;i<original.size();i++){
            int u=mp[original[i]];
            int v=mp[changed[i]];
            adj[u].push_back({v,cost[i]});
        }
         vector<vector<long long>>dist(cnt,vector<long long >(cnt,1e18));
        for(int i=0;i<cnt;i++){
            dijkstra(i,adj,dist);

        }
     
     //All valid length substring
        unordered_set<int>lens;
        for(auto it:original){
            lens.insert(it.size());
        }

        int n=source.length();

        vector<long long>dp(n+1,1e18);
        dp[n]=0;

        for(int i=n-1;i>=0;i--){
            if(source[i]==target[i]){
                dp[i]=dp[i+1];
            }
          
                for(auto len:lens){
                    int val=i+len-1;
                    if(val>=n) continue;

                    string s1=source.substr(i,len);
                    string s2=target.substr(i,len);

                    if(!mp.count(s1)||!mp.count(s2)) continue;

                    long long cos=dist[mp[s1]][mp[s2]];
                    if(cos<1e18){
                        dp[i]=min(dp[i],cos+dp[i+len]);
                    }
                }
            
        }

        if(dp[0]>=1e18) return -1;
        return dp[0];
        
    }
};