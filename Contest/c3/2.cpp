#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0;i<n;i++) {
      cin>>a[i];
    }

    ll mx=0;
    for(int i=0;i<n-1;i++) {
      mx=max(mx,a[i]-a[i+1]);
    }

    for(int i=1;i<n;i++) {
      if(a[i]<a[i-1]) { 
        a[i]+=mx; // array will get updated for the next element 
      } // 10 5 9 ; mx=5;  10 10 9 ; 10 10 14
    }

    if(is_sorted(a.begin(),a.end())) {
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }
  }

  return 0;
}



