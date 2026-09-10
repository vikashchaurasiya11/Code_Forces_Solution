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
    vector<ll>b(n+2,0);

    ll mx=0;

    for(ll i=0;i<n;i++){
      cin>>a[i];
      mx=max(mx,a[i]);
      if(a[i]<=n+1){
        b[a[i]]++;
      }
    }

    ll mex=0;
    for(ll i=0;i<=n+1;i++){
      if(b[i]==0){
        mex=i;
        break;
      }
    }

    ll ans=mx*n;

    if(mx==mex-1){
      ans+=(mex-2)*(mex-1)/2;
      ans+=mex;
      ans+=mex*(n-mex);
    }
    else{
      ans+=mex*(mex+1)/2;
      ans+=mex*(n-mex-1);
    }

    cout<<ans<<endl;
  }

  return 0;
}