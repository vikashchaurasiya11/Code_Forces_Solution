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
		long long n;
		cin >> n; 
		n--; 
		long long msb = log2(n);
		vector<long long> ans;
		long long num = pow(2, msb) - 1; 
		while (num >= 0)
		{
			ans.push_back(num);
			num--;
		}
		num = pow(2, msb); 
		while (num <= n) 
		{
			ans.push_back(num);
			num++;
		}
		for (auto it : ans) 
			cout << it << " ";
		cout << endl;
	}
}

// 3,4 and 7,8 ans 15,16 ka value max aa jeyaga jab ye sath me hone to isiliye inse ek kam pahle walo to 0 tak print kar denge taaki ye kabhi bhi apne cost se jada na aaye.

