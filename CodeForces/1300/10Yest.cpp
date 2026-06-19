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
    map<ll,ll>mp;
    vector<ll>a(n);
    vector<pair<ll,ll>>b;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      if(a[i]<i+1){
        b.push_back({a[i],i+1});
      }
    }

    sort(b.begin(),b.end());
    ll count=0;

    for (ll i=0;i<b.size();i++){
      ll key = b[i].second;
      ll l=0, h=b.size()-1;

      while(l<=h){
        ll m= l +(h-l)/2;
        if(b[m].first> key){
          h= m-1;
        }
        else {
          l=m+1;
        }
      }
      // correct indext position = h+1; kyuki h ek pichhe hoga wrong wale case me 
      if(h+1<b.size()){
        ll total_element= (b.size()-(h+1)); // frequency of elemnt greater than that previous index of eleemnt
        count+=total_element;
      }
    }
    cout<<count<<endl;
    
  }
  return 0;
}  