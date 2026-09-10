#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ll;


int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;

    vector<ll>a(n-1);
    vector<ll>c;
    c.push_back(1);
    for (ll i=0;i<n-1;i++) {
      cin>>a[i];
      c.push_back(a[i]);
    }

    multiset<ll>st;
    vector<ll>b(n);
    for (ll i=0;i<n;i++) {
      cin>>b[i];
      st.insert(b[i]);
    }
    sort(c.begin(),c.end());

    ll count=0;
    for (ll i=0;i<n;i++) {
      auto it=st.upper_bound(c[i]);

      if(it != st.end()){
        count++;
        st.erase(it);
      }

    }

    cout<<n-count<<endl;

  }
  return 0;
}  