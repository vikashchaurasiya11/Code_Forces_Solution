#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, x;
		cin >> n >> x; 
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		vector<pair<long long, long long>> segs(n);
		for (int i = 0; i < n; i++)
			segs[i] = {a[i] - x, a[i] + x};

		long long ans = 0; 
		
		long long l = segs[0].first;
		long long r = segs[0].second;
		for (int i = 1; i < n; i++)
		{
			
			l = max(l, segs[i].first);
			r = min(r, segs[i].second);
			
			if (l > r)
			{
				ans++;
				l = segs[i].first;
				r = segs[i].second;
			}
		}
		cout << ans << endl; 
	}
}


