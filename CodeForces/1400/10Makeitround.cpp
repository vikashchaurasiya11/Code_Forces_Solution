#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    ll n,m;
    cin>>n>>m;

    ll e2=0,e5=0;
    ll x=n;

    while(x%2==0) //freq count.
    {
      e2++;
      x/=2;
    }

    x=n;
    while(x%5==0)
    {
      e5++;
      x/=5;
    }

    ll k=1;

    while(e2<e5 && k*2<=m) // 2 aur 5 ki freq same banao
    {
      k*=2;
      e2++;
    }

    while(e5<e2&&k*5<=m)// k check kareag ki kahi wo m ko exceed to nhi kiya
    {
      k*=5;
      e5++;
    }

    while(k*10<=m)
    {
      k*=10; // last me jitna zero ban sakta hai, bcz m ke nearest tak jaana hai
    }

    k*=m/k; // last me 1 hi aayega kyuki  k jo hai wo m se chhota hoga

    cout<<n*k<<endl;
  }

  return 0;
}