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
		long long n, m;
		cin >> n >> m; 

		
		vector<vector<long long>> a(n, vector<long long>(m));
		for (long long i = 0; i < n; i++)
			for (long long j = 0; j < m; j++)
				cin >> a[i][j]; 

		long long neg = 0; //negatives
		long long minN = INT_MAX; 
		long long sum = 0; 
		
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < m; j++)
			{
				if (a[i][j] < 0)
					neg++; 
				minN = min(minN, abs(a[i][j])); 
				sum += abs(a[i][j]); 
			}
		}

		
		if (neg % 2 == 0) // agr even hua to sab kahi n kahi neutrilize ho jayega
			cout << sum << endl;
		else
			// sabhi abs(bade number) ko positive karke add kar denge aur sabse chhote wale abs ka double minus karenge kyuki uska (abs ek baar add ho chuka )
			cout << sum - 2 * abs(minN) << endl; 
	}
}


