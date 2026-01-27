class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        
        vector<int>dist(n,1e9);
        dist[0]=0;

vector<vector<pair<int,int>>> adj(n);
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,2*w});
        }

priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});
        while(!pq.empty()){
            int edg=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            if(dist[edg]<d){
                continue;
            }
            for(auto it:adj[edg]){
                int edg2=it.first;
                int wt1=it.second;
                if(dist[edg]+wt1<dist[edg2]){
                    dist[edg2]=dist[edg]+wt1;
                    pq.push({dist[edg2],edg2});
                }
            }
        }
        if(dist[n-1]==1e9) return -1;
        return dist[n-1];
        
    }
};