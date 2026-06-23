#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
  ll n;
  cin>>n;

  vector<ll>a(n),b(n),c(n);
  map<ll,ll>mp;

  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
    mp[a[i]]=i;
  }

  for(ll i=0;i<n;i++)
  {
    cin>>b[i];
    c[mp[b[i]]]=i;
  }

  ll count=0;
  for(ll i=0;i<n;i++){
    if(c[i]<=i) count++;
   
  }

  cout<<count<<endl;

  
  return 0;
}