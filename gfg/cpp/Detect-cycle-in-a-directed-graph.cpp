//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.

    void checkCycle(int V, vector<int> adj[],vector<int> &visited,bool &flag){
        for(int i=0;i<adj[V].size();i++){
            if(!visited[adj[V][i]] and !flag){
                visited[adj[V][i]]++;
                checkCycle(adj[V][i],adj,visited,flag);
            }else{
                flag = true;
                return;
            }
        }
    

    }

    bool isCyclic(int V, vector<int> adj[]) {
        for(int i=0;i<V;i++){
            vector<int> visited(V,0);
            bool flag = false;
            checkCycle(i,adj,visited,flag);
            if(flag){
                return flag;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends