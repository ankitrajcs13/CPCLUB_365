class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        q.push(0);
        vector<int> ans;
        
        unordered_map<int,bool> vis;
        vis[0]  = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            // check for all the adjacent nodes
            for(auto i: adj[node]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = 1;   
                }
            }
        }
        return ans;
    }
};