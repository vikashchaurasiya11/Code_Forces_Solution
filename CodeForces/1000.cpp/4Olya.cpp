#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n;
    cin >> n;
    vector<long long> a;  // smallest elements
    vector<long long> b;  // second smallest elements
    for(long long i = 0; i < n; i++) {
      long long m;
      cin >> m;
      vector<long long> v(m);
      for(long long j = 0; j < m; j++) {
        cin >> v[j];
      }
      sort(v.begin(), v.end());
      a.push_back(v[0]);
      if(m > 1)
        b.push_back(v[1]);
      else
        b.push_back(v[0]);
    }
    long long sum = 0;
    if(n == 1) {
      cout << a[0] << endl;
    }
    else {
       sort(a.begin(),a.end()); 
       sort(b.begin(),b.end()); 
       if(b.size()==1) 
       sum+=b[0]; 
       else{ 
        for(int i=1;i<b.size();i++){ 
         sum+=b[i]; 
        } 
       }
      sum+=a[0];
      cout << sum << endl;
    }
  }
  return 0;
}