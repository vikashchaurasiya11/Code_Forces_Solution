#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
	int t = 1;
	cin >> t; 
	while (t--) {
		string s;
    cin >> s; 
    int flag=0;
    int n = (int)s.size(); 
    int k;
	
    vector <int> v(26,0);
    for (k = 0; k < n; k++) { 
      if (v[(s[k]-'a')] == 0) {
       v[(s[k]-'a')] =1;
      } 
      else break; 
    }
	
	for (int i = k; i < n; i++) { 
		if (s[i] != s[i - k]) {
			flag=1;
		}
	}
  if(flag==0) cout << "YES" << endl;
	else cout << "NO" << endl;
	}
}
