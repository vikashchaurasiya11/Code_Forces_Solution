#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

// Global variables 
int red = 0, white = 0; // all value gets stored here

void dfs(int node, int color, vector<vector<int>>& adj, vector<int>& visited) {
	
	visited[node]++; 
	if (color == 1)
		red++;
	else
		white++;
	
	// Traverse all adjacent nodes
	for (int neighbor : adj[node]) {
		if (!visited[neighbor]) { // if not visited
			dfs(neighbor, 1 - color, adj, visited); // 1-0 means , if curren 1 then next becomes 1-1=0. and dif curr 0 then next becomaes 1-0=1.
		}
	}
}

int main() {
	int n;
	cin >> n; 
	
	vector<vector<int>> adj(n, vector<int>());
	
	vector<int> visited(n, 0);
	
	for (int i = 0; i < n - 1; i++) { 
		int u, v;
		cin >> u >> v;
		u--; v--; // Convert to zero-based index (start from 0 and not 1)
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(0, 0, adj, visited); // second zero means white colour , we start from white colour

	cout << 1LL * red * white - (n - 1) << endl; // max total edges(r*w)- given edges(from n nodes , n-1 edges can be formed)
	return 0;
}

