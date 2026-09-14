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
  vector<ll>a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }

  multiset<ll>s;
  ll sum=0;
  ll ans=LLONG_MIN;

  for(ll i=0;i<n;i++){
    if(s.size()==m-1){

      ll score=m*a[i]-sum;
      ans= max(ans,score);
    }
 
    s.insert(a[i]);
    sum+=a[i];

    if(s.size()>m-1){ 
      auto it=prev(s.end());
      sum-=*it;
      s.erase(it);
    }
  }

  cout<<ans<<endl;
  }
  return 0;
}