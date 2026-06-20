#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;

    vector<pair<ll,ll>> b(n);

    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;

      vector<ll> temp(x);

      ll need=0;

      for(ll j=0;j<x;j++){
        cin>>temp[j];
        need=max(need,temp[j]-j+1); 
      }
 
      b[i].first=need; // max starting elemnt
      b[i].second=x; // no. of elemnt in that block
    }

    sort(b.begin(),b.end());

    ll ans=b[0].first;
    ll killed=0;

    //  13,4 and 18,5 then (18-4>13) so new = max(pev, current_start - total_killed)
    // arrange in ascending order then start from first element and move further
    for(ll i=0;i<n;i++){ 
      ans=max(ans,b[i].first-killed);
      killed+=b[i].second;
    }

    cout<<ans<<endl;
  }

  return 0;
}