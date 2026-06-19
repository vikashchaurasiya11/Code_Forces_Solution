#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--){
		string s;
		cin >> s; 
		int n = s.length(); 
		int c = 0, f = 0; 
		for (int i = 0; i < n; i++){
			if (s[i] == '0') c++;
			else f++;
		}
		int t = 0;
		for (int i = 0; i < n; i++){
			if (s[i] == '0' && f > 0){
				f--; 
				t++; 
			}
			else if (s[i] == '1' && c > 0){
				c--; 
				t++; 
			}
			else break;
		}
		cout << n - t << endl;
	}
	return 0;
}

