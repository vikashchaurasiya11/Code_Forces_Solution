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
    ll n;
    cin>>n;

    vector<ll>a(n);
    set <ll>st;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      st.insert(a[i]);
    }
    sort(a.begin(),a.end());
    ll dis=st.size();
    ll ans=-1;

    if(st.find(dis) != st.end()){
      ans=dis;
    }

    else {
      for (ll i=0;i<n;i++) {
        if(a[i]>dis){
          ans=a[i];
          break;
        }
      }
    }

    cout<<ans<<endl;

    
  }
  return 0;
}  