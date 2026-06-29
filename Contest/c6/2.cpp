#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    ll n;
    cin>>n;

    string s;
    cin>>s;

    vector<ll>pos;
    ll one=0;

    for(ll i=0;i<n;i++)
    {
      if(s[i]=='1')
      {
        pos.push_back(i);
        one++;
      }
    }

    if(one==0)
    {
      cout<<(n+2)/3<<endl;
      continue;
    }

    ll ans=one;

    ans+=(pos[0]+1)/3; // +2 nhi karenge because 1 hoga to ek zero pahle hi rukna hoga

    for(ll i=1;i<pos.size();i++)
    {
      ll gap=pos[i]-pos[i-1]-1;
      ans+=gap/3; // because zero are in between of two 1 so 2 zero will be eliminated.
    }

    ans+=((n-1)-pos.back() +1)/3; // total number of zero +1 , formula

    cout<<ans<<endl;
  }

  return 0;
}