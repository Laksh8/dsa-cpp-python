//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.

    void checkVertex( int V,vector<int> adj[] , vector<int> &visited ){
        for(int i=0;i<adj[V].size();i++){
            if(!visited[adj[V][i]]){
                visited[adj[V][i]]++;
                checkVertex(adj[V][i],adj,visited);
            }
        }
    }


	int findMotherVertex(int V, vector<int>adj[])
	{
        int flag = true;
	    for(int i=0;i<V;i++){
            vector<int> visited(V,0);
            visited[i]++;
            checkVertex(i,adj,visited);
            for(int j=0;j<V;j++){
                if(visited[j] == 0){
                    flag = false;
                    break;
                }
            }

            if(flag){
                return i;
            }

        }
        return -1;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends