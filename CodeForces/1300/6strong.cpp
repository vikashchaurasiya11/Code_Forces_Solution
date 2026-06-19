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
    ll n;
    cin>>n;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<ll>b(n);
    for (ll i=0;i<n;i++) {
      cin>>b[i];
    }

    vector<ll>diff(n);
    for (ll i=0;i<n;i++) {
      diff[i]=a[i]-b[i];
    }
    
    map<int,int> mp;
    for (ll i=0;i<n;i++) {
      mp[diff[i]]++;
    }

    ll ans;
    ll mx;
    for (auto x: mp) {
      ans= x.second;
      mx= x.first;
    }

    cout<<ans<<endl;
    vector<ll>res;
    for (ll i=0;i<n;i++) {
      if(mx==diff[i]) cout<<i+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}  