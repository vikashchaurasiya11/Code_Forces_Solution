#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    ll s= (n*(n-1))/2;
    vector<long long>a(s);
    for (long long i=0;i<s;i++) {
      cin>>a[i];
    }

    sort(a.begin(),a.end());
    ll x = n - 1, i = 0; 
		
		while (x > 0) {
			cout << a[i] << " "; 
			i += x; 
			x--; 
    }

    cout << "1000000000\n";
  }
  return 0;
}  