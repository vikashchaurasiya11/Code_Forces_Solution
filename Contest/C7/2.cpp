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
    ll n,l,r;
    cin>>n>>l>>r;

    vector<ll>pre(n+1);

    for(ll i=0;i<=n;i++){
      pre[i]=i;
    }

    pre[r]=pre[l-1];  // this will make all the number repeat twice. 
    // 1 2 3 4 
    // for(2,4) 1^2^3^2^1^3  all number appears twice.

    vector<ll>a;

    for(ll i=1;i<=n;i++){
      a.push_back(pre[i]^pre[i-1]); 
    }

    for(ll i=0;i<n;i++){
      cout<<a[i]<<" ";
    }

    cout<<endl;
  }

  return 0;
}