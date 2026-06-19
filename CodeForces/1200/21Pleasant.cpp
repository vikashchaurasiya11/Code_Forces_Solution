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

    vector<pair<ll,ll>> p(n);
    for(ll i=0;i<n;i++){
      cin>>p[i].first;
      p[i].second=i+1;;
    }

    sort(p.begin(), p.end());
    int count=0;
    for(ll i=0;i<n-1;i++){
      for(ll j=i+1;j<n;j++){
        if(p[i].first * p[j].first>= 2*n)  break;
        if(p[i].first * p[j].first == p[i].second+p[j].second ) count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}