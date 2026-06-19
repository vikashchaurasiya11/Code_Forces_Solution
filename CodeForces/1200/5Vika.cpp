#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		int n, k;
		cin >> n >> k; 

		vector<int> v(n);
		for (int i = 0; i < n; i++) 
			cin >> v[i]; 
		vector<int> colours[k + 1]; 

		for (int i = 1; i <= k; i++) 
		{
			colours[i].push_back(0); 
		}

		for (int i = 0; i < n; i++) 
		{
			colours[v[i]].push_back(i + 1); 
		}

		for (int i = 1; i <= k; i++) 
		{
			colours[i].push_back(n + 1);
		}

		priority_queue<int> jumps[k + 1]; 

		int ans = INT_MAX; 

		for (int i = 1; i <= k; i++)
		{
			for (int j = 0; j < colours[i].size() - 1; j++)
			{
				
				jumps[i].push(colours[i][j + 1] - colours[i][j] - 1);
			} 

			int max_val = jumps[i].top(); 

			jumps[i].pop(); 

			
			if (max_val % 2 == 0) // 2 part me tutega ek even aur ek odd
      // for ex : 4 -> bich wale ko paint kar denge to (one and two) part me tutega
			{
				jumps[i].push(max_val / 2); 
				jumps[i].push((max_val / 2) - 1);
			}
			else // odd hoga to bich wale ko paint karne ke baad 2 even part me tut jayega
			{
				jumps[i].push(max_val / 2);
				jumps[i].push(max_val / 2);
			}

			ans = min(ans, jumps[i].top()); 
		} 

		cout << ans <<endl; 
	}

	return 0;
}

