#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, k, b, s;
		cin >> n >> k >> b >> s; 
		long long mins = (k * b);
		long long maxs = (k * b) + (k - 1) * n;
		if (s < mins || s > maxs)
			cout << "-1" << endl; 
		else
		{
			vector<long long> ans(n, 0); 
			ans[0] = mins; 
			s -= mins; 
			for (int i = 0; i < n; i++)
			{
				long long add = min(k - 1, s); 
				ans[i] += add; 
				s -= add; 
			}
			for (long long i = 0; i < n; i++)
				cout << ans[i] << " ";
			cout << endl;
		}
	}
}
