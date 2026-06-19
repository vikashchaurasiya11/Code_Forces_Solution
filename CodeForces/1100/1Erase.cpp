#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>

using namespace std;
typedef long long ll;

int main() {
	int t ; 
	cin >> t;

	while (t--) {
		int n; 
		cin >> n;
		string s; 
		cin >> s;
		
		map<char, int> freq;
		int count = 0; 
	
		vector<int> dist(n, 0); 
		
		for (int i = 0; i < n; i++) {  // to fill the frefix with unique number
			freq[s[i]]++;
			if (freq[s[i]] == 1) { //number of unique char in string
				count++;  
			}
			dist[i] = count;  // prefix sum stored in vector
		}

		ll ans = 0; 
		for (int i = 0; i < n; i++) { 
			ans += dist[i]; // add all the prefix sum value
		}
		cout << ans << endl;
	}
}