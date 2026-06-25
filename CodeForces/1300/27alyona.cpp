#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  
  ll n,h;
  cin>>n>>h;

  vector<ll>a(n);
  for (ll i=0;i<n;i++) {
    cin>>a[i];
  }

  ll count=0;
  vector<ll>b;
  
  for (ll i=0;i<n;i++) {
    b.push_back(a[i]);
    sort(b.begin(),b.end());
    ll sum=0;
    for (ll i=b.size()-1;i>=0;i-=2) {
      sum+=b[i];
    }
    if(sum>h){
      break;
    }
    else count++;
  }

  cout<<count<<endl;

  return 0;
}  