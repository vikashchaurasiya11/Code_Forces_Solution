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
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<ll>b(n);
    for (ll i=0;i<n;i++) {
      cin>>b[i];
    }

    vector<vector<ll>>c(n+1); // bcz c[0] is always empty.
    for (ll i=0;i<n;i++) {
      c[a[i]].push_back(b[i]); // c[0 ] useless hia
    }

    ll mx=0;
    for (ll i=1;i<=n;i++) { // c[0] me kabhi kuchh hoga hi nhi
      sort(c[i].rbegin(),c[i].rend());
      mx= max(mx, (ll)c[i].size());
    }

    // prefix sum
    for (ll i=1;i<=n;i++){
      for (ll j=1;j<c[i].size();j++){
        c[i][j] +=c[i][j-1];
      }
    }

    vector<ll> ans(mx+1,0);

    for (ll i=1;i<=n;i++){

       for (ll j=1;j<=c[i].size();j++){ // jo bhi size ho hoga to har size ka uske respective me add kar lega.k=1 ka ans[1] me , k=2 ka ans[2] me ,
      //  baad me ans[1],ans[2] dusre column me jayenge to update hote rahenge.
        ll len= (c[i].size()/j)*j;
        ans[j] += c[i][len-1]; // ans [j] me har size ki value add karta jayega. jab size = 1,2,3,4  to har size ka value j=1,2,3,4 me add kar lega, aur end me sab print kar dega
       }
    }
    for (ll j=1;j<=mx;j++)
     cout<<ans[j]<<" ";

    for (ll j=mx+1;j<=n;j++)
      cout<<0<<" ";

    cout<<'\n';

  }
  return 0;
}  