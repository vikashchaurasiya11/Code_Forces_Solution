#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;

int ans = 0;

int dfs(int node, vector<vector<int>>& adj, string& s) {
	
	if (adj[node].size() == 0) { // node has no child
		return s[node - 1] == 'W' ? 1 : -1; // previous node colour
	}
	
	int count = 0;
	
	for (auto child : adj[node]) {
		count += dfs(child, adj, s);
	}
	
	count += (s[node - 1] == 'W' ? 1 : -1);
	
	if (count == 0) { // where net count=0 ans ++;
		ans++;
	}
	
	return count; // for every parent it returns the balanced w or b
}

int main() {
	int t; 
	cin>>t;
	while (t--) {
		ans=0;
		int n; 
		cin>>n;
		
		vector<vector<int>> adj(n + 1, vector<int>());
		
		for (int i=0; i<n-1; i++) { 
			int temp;
			cin>>temp;
			adj[temp].push_back(i + 2);// for 1st element,it is for the  2nd node,2 nd elemnt is for the 3 rd node, index is start form 0 so (i+2), 1st elemnt index is 0, but it is th second node, 0+2=2nd node. 
		}
		
		string s;
		cin>>s;
		
		dfs(1, adj, s);  // start node
		
		cout<<ans<<endl;
	}
}

