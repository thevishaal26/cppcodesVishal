#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<vector<int>> &adj) {
        vector<int> vis(v, 0); // Visited array
        vis[0] = 1;           // Start from node 0
        queue<int> q;         // Queue for BFS
        q.push(0);            
        vector<int> bfs;      // Result vector for BFS order

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            // Traverse all neighbors of the current node
            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1; // Mark as visited
                    q.push(it);  // Push to queue
                }
            }
        }
        return bfs;
    }
};

int main() {
    // Number of vertices and edges
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    // Create adjacency list
    vector<vector<int>> adj(v);
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Uncomment for an undirected graph
    }

    // Create Solution object and perform BFS
    Solution obj;
    vector<int> result = obj.bfsOfGraph(v, adj);

    // Print the BFS traversal
    cout << "BFS Traversal starting from node 0:" << endl;
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
