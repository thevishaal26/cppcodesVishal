#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to perform DFS starting from a given node.
    void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &result) {
        vis[node] = 1; // Mark the node as visited
        result.push_back(node); // Add the node to the result
        // Traverse all its neighbors
        for (auto neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfs(neighbor, adj, vis, result);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V, 0); // Visited array initialized to 0
        vector<int> result; // To store the DFS traversal
        int start = 0; // Assuming the graph is connected and starts at node 0
        dfs(start, adj, vis, result);
        return result;
    }
};
int main() {
    int V = 5;
    vector<int> adj[V];
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    Solution obj;
    vector<int> result = obj.dfsOfGraph(V, adj);

    // Print the result
    for (int node : result) {
        cout << node << " ";
    }
    return 0;
}
