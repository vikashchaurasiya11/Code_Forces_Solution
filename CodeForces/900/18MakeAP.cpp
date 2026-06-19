#include <iostream>
using namespace std;
int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		long long a, b, c;
		cin >> a >> b >> c; 
		bool answer = false;
		long long new_a = 2 * b - c; 
		if (new_a > 0 && new_a % a == 0) // number is positive quotient and it should be divioded by a.
			answer = true;
		long long new_b = (a + c) / 2; 
		// number is positive quotient and it should be divioded by b. (c-a) should be even.
		if (new_b > 0 && new_b % b == 0 && (c - a) % 2 == 0) 
			answer = true;
		long long new_c = 2 * b - a; 
		if (new_c > 0 && new_c % c == 0) // number is positive quotient and it should be divioded by c.
			answer = true;
		if (answer)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
// new a, b, c cant be zero (new_b / b > 0)
