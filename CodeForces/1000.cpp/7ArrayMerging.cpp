#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		long long n;
		cin >> n; 

		vector<long long> a(n);
		for (long long i = 0; i < n; i++)
			cin >> a[i];

		vector<long long> b(n);
		for (long long i = 0; i < n; i++)
			cin >> b[i];

		vector<long long> la(2 * n + 1, 0); // index pe us number ki frequency rakh denge aur intital zero rakh denge
		vector<long long> lb(2 * n + 1, 0);

		long long c = 1; 

		for (int i = 1; i < n; i++) //this part i have done counter++
		{
			if (a[i] == a[i - 1])
				c++;
			else
			{
				la[a[i - 1]] = max(la[a[i - 1]], c);
				c = 1; 
			}
		}
		
		la[a[n - 1]] = max(la[a[n - 1]], c); // last step will be check here
		c = 1;

		for (int i = 1; i < n; i++)
		{
			if (b[i] == b[i - 1])
				c++;
			else
			{
				
				lb[b[i - 1]] = max(lb[b[i - 1]], c);
				c = 1;
			}
		}
		
		lb[b[n - 1]] = max(lb[b[n - 1]], c);

		long long max_freq = -1; 

		for (int i = 1; i <= 2 * n; i++) //jiski freq jadaa hogi wo le lenge. la[i] == index pe us number ki frequency
			max_freq = max(max_freq, la[i] + lb[i]);

		cout << max_freq << endl; 
	}
	return 0;
}

