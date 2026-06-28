#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef long long ll;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin>>T;

  while(T--)
  {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<ll> cnt(3,0);
    cnt[0]=1;

    int pref=0;

    for(char c:s)
    {
      pref+=(c=='0'?1:-1);
      int r=((pref%3)+3)%3;
      cnt[r]++;
    }

    ll total=1LL*n*(n+1)/2;

    ll zeroMod=0;
    for(int r=0;r<3;r++)
    {
      zeroMod+=cnt[r]*(cnt[r]-1)/2;
    }

    ll ans=total-zeroMod;

    ll badAlt=0;

    int i=0;
    while(i<n)
    {
      int j=i;
      while(j+1<n && s[j+1]!=s[j])
      {
        j++;
      }

      ll L=j-i+1;

      ll a=(L+1)/2;
      ll b=L/2;

      ll oddSub=a*(a+1)/2+b*(b+1)/2;

      badAlt+=oddSub-L;

      i=j+1;
    }

    cout<<ans-badAlt<<endl;
  }

  return 0;
}