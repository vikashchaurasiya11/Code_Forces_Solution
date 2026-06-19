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
		long long a, b;
		cin >> a >> b; 

		long long ans = INT_MAX; 

		for (int add = 0; add < 32; add++) //kyuki 10^9/2 max no of operation 31 lagenge aur 1 add karne me 
		{
			long long ops = add; 
			long long new_b = b + add; 
			if (new_b == 1) 
				continue;
			long long copy_a = a;

			while (copy_a > 0) 
			{
				copy_a /= new_b; 
				ops++; 
			}
			ans = min(ans, ops);  //jo least hoga yaha store ho jayega 
		}
  
	  cout << ans << endl;
  }
}


